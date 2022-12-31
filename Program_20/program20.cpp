/*
  Author: Brendon Newton
  Assignment Title: Program 20
  Assignment Description: This program reads in a a
  						  list of students and sorts
  						  them based on GPA, Class year,
  						  Last name, and First name
  Due Date: 12/02/2022
  Date Created: 12/29/2022
  Date Last Modified: 12/30/2022
*/

/*
  Data Abstraction: RosterList type roster object created

  Input: Member function opens file named "stDATA.txt"

  Process: Reads each line into a student object
  		   Sorts student objects into a vector

  Output: Outputs student list
          Doesn't print duplicates

  Assumptions: It is assumed the user will input a valid file
               It is assumed the information in each line is valid
               There are less than 100 students
*/

#include "classFunctions.h"

int main() {
	
	//Data Abstraction

	RosterList roster;

	//Input

	//Process

	roster.fillList();

	//Output

	roster.display();

	return 0;
}
