#!/usr/bin/python3
from sqlalchemy import create_engine, Column, Integer, String
""" Helps to create a engine """
from sqlalchemy.orm import sessionmaker
""" Needed to create a new session """
from sqlalchemy.ext.declarative import declarative_base
""" To create the table, the declarative base is imported """

engine = create_engine('postgresql://jerinjose:jerinjose@localhost:5432/alchemy', echo=False)
""" engine = create_engine('sql_type://user_name:password@URL:port/database_name', echo=False) """

Session = sessionmaker(bind=engine)
Session = Session()
""" Creates a session and binds the engine """

# delete data
student = session.query(Student).filter(Student.name=="Gideon").first()
""" accesses the data you want to modify """
session.delete(student)
""" deletes data for student named Gideon Gideon """
session.commit()
""" saves changes to table """


