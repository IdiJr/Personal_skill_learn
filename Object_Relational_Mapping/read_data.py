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

student2 = Student(name="Pitch", age=30, grade="Fith")

student3 = Student(name="James", age=24, grade="First")

session.add(student1) # session.add_all([name_of_instances]) - for multiple additions
""" adds the instance to the session created """

session.add_all([stdent2, student3])

session.commit()
""" commits the instance to the session created """

# Get all data
students = session.query(Student)
""" all data from the query is stored in the students table """ 

for student in students: # this allows the program to print output of the query
    print(student.name) # can be done for multiple fields as well

# Get data in order
student = session.query(Student).order_by(Student.name)
""" results from the query are sorted out according to student name """

for student in students:
    print(student.name, student.grade)

# Get data by filtering
student = session.query(Student).filter(Student.name=="James").first()
""" filters results for a single student"""
print(student.name, student.grade, student.age)

students = session.query(Student).filter(or_(Student.name=="James", Student.name=="Pitch"))
""" filters results for a multiple students by including the or_ operator """
for student in student:
    print(student.name, student.age)

# Count the number of results
student_count = session.query(Student).filter(or_(Student.name=="James", Student.name=="Pitch")).count()
print(stdent_count) # prints out the number of students counted
