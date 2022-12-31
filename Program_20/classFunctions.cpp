/*
    Author: Brendon Newton
    Assignment Title: Program 20
    Assignment Description: This program defines functions
                            for the RecordList class
    Due Date: 12/02/2022
    Date Created: 12/29/2022
    Date Last Modified: 12/30/2022
*/

#include "classFunctions.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>

void RosterList::addStudent(Student& currStudent) {
	unsigned int i = 0;
	for (i = 0; i < studentList.size(); i++) {
		//Sort by GPA
		if (currStudent.GPA < studentList[i].GPA) {
			break;
		}
		//If same GPA, sorts by class year
		if (currStudent.GPA == studentList[i].GPA) {
			if (currStudent.getYear() < studentList[i].getYear()) {
				break;
			}
			//If same year, sorts by last name
			if (currStudent.year == studentList[i].year) {
				if (currStudent.lastName < studentList[i].lastName) {
					break;
				}
				//If same last name, sorts by first name
				if (currStudent.lastName == studentList[i].lastName) {
					if (currStudent.firstName < studentList[i].firstName) {
						break;
					}
					//If all same, marked as duplicate
					if (currStudent.firstName == studentList[i].firstName) {
						currStudent.isDuplicate = true;
						i++;
						break;
					}
				}
			}
		}
	}
	studentList.insert(studentList.begin() + i, currStudent);
}

int Student::getYear() const {
	std::string checkYear;
	int returnVal;
	
	checkYear = year;

	if (checkYear == "FR") {
		returnVal = 1;
	}
	else if (checkYear == "SO") {
		returnVal = 2;
	}
	else if (checkYear == "JR") {
		returnVal = 3;
	}
	else {
		returnVal = 4;
	}
	return returnVal;
}

void RosterList::addStudents() {
	std::string currLine;
	std::ifstream stream;
	std::string gobbleString;
	
	stream.open("stDATA.txt");

	getline(stream, gobbleString);

	while (getline(stream, currLine)) {
		Student currStudent;
		std::stringstream ss;
		ss << currLine;
		ss >> currStudent.firstName;
		ss >> currStudent.lastName; 
		ss >> currStudent.year;
		ss >> currStudent.zipcode;
		ss >> currStudent.age;
		ss >> currStudent.hometown;
		ss >> currStudent.GPA;
		addStudent(currStudent);
	}

	stream.close();
}

void RosterList::fillList() {
	addStudents();
}

void RosterList:: display() const {
	std::cout << "First Name      " << "Last Name          "
	          << "Class    " << "Zip       " << "Age    "
	          << "HomeTown             " << "GPA  " << std::endl;

	for (size_t i = 0; i < studentList.size(); i++) {
		if (!studentList[i].isDuplicate) {
			std::cout << std::setw(16) << std::setfill(' ') << std::left;
			std::cout << studentList[i].firstName;
			std::cout << std::setw(19) << studentList[i].lastName;
			std::cout << std::setw(9) << studentList[i].year;
			std::cout << std::setw(10) << studentList[i].zipcode;
			std::cout << std::setw(7) << studentList[i].age;
			std::cout << std::setw(21) << studentList[i].hometown;
			std::cout << std::fixed << std::setprecision(2);
			std::cout << std::setw(4) << studentList[i].GPA << std::endl;
		}
		else {
			std::cout << "I THINK THIS IS A DUPLICATE RECORD" << std::endl;
		}
	}
}
