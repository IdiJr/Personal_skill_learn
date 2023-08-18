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

Base = declarative_base()

class Student(Base):
    __tablename__ = 'student'

    id = Column(Integer, primary_key=True)
    """ id is assigned as the primary_key """
    name = Column(String(50))
    """ name is defined as a string with maximum characters of 50 """
    age = Column(Integer)
    """ age defined as an Integer """
    grade = Column(String(50))
    """ grade is defined as a string with maximum characters of 50 """

Base.metadata.create_all(engine)
""" Create a database with the Attributes as columns """

student1 = Student(name="Ali", age=27, grade="Tenth")
""" creates an instance of the class Student """

session.add(student1) # session.add_add([name_of_instances]) - for multiple additions
""" adds the instance to the session created """

session.commit()
""" commits the instance to the session created """
