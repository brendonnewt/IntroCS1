/*
    Author: Brendon Newton
    Assignment Title: Program 20
    Assignment Description: This program declares functions
                            for RecordList Class
    Due Date: 12/02/2022
    Date Created: 12/29/2022
    Date Last Modified: 12/29/2022
*/

#ifndef CLASSFUNCTIONS_H
#define CLASSFUNCTIONS_H

#include <string>
#include <vector>

struct Student {
	std::string firstName;
	std::string lastName;
	std::string year;
	int zipcode;
	int age;
	std::string hometown;
	double GPA;
	bool isDuplicate = false;
	
	/*
    Description: Gets the student class year 
    Return: Class year as an integer
    		FR is 1, SO is 2, JR is 3,
    		SR is 4
    Precondition: Student year string has been set
    Postcondition: Student year string is not changed
    			   Class year integer is returned
    */

	int getYear() const;
};

class RosterList {

	public:

	/*
    Description: Fills the student list of a RosterList
    Return: None
    Precondition: RosterList object is empty
    Postcondition: studentList vector is filled with
    			   data from the input file
    */

	void fillList();

	/*
    Description: Displays the student list
    Return: None
    Precondition: Student list has been set
    Postcondition: No values are changed
    */

	void display() const;

	private:
	
	std::vector<Student> studentList;

	/*
    Description: Parses data from file and fills
                 student objects with values
    Return: None
    Precondition: File has not been read
    Postcondition: studentList vector filled with
    			   sorted students
    */

	void addStudents();

	/*
    Description: Inserts student value into studentList
    Return: None
    Precondition: addStudents() has been called
    Postcondition: student inserted into studentList
    */

	void addStudent(Student&);

};

#endif