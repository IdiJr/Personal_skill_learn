#!/usr/bin/python3
"""
SSH into student's servers web-01 and web-02 to verify that MySQL is installed.
"""

import sys
from fabric import Connection
from paramiko import RSAKey

def main():
    if len(sys.argv) != 4:
        print("Usage: python3 script.py <host> <user> <rsa_key_file>")
        sys.exit(1)

    host = sys.argv[1]
    user = sys.argv[2]
    rsa_key_file = sys.argv[3]

    try:
        rsa_key = RSAKey.from_private_key_file(rsa_key_file)
        with Connection(host, user=user, connect_kwargs={"pkey": rsa_key}) as c:
            result = c.run("mysql --version", warn=True)
            if result.ok:
                mysql_version = result.stdout.split()[-1]
                print("MySQL is installed. Version:", mysql_version)
            else:
                print("MySQL is not installed on the server.")
    except Exception as e:
        print("An error occurred:", str(e))
        sys.exit(1)

if __name__ == "__main__":
    main()
