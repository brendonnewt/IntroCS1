/*
  Author: Brendon Newton
  Assignment Title: Program 13
  Assignment Description: This program reads in a set
                          of coordinates from a file and
                          outputs the final location,
                          total distance traveled,
                          avg distance to start point,
                          and ending distance to start
  Due Date: 10/07/2022
  Date Created: 12/19/2022
  Date Last Modified: 12/20/2022
*/

/*
  Data Abstraction: IOstream, fstream, string,
                    cmath, and iomanip included
                    fileName made to get file name
                    inFS stream declared
                    Math varaibles declared
                    Bool badFile to check validity

  Input: Recieves file name from user
         Opens file

  Process: Discards first two lines from file
           Reads in each line and stores it
           Performs an action based on command

  Output: Outputs start point, total distance traveled,
          distance to start, and avg distance to start

  Assumptions: It is assumed the user will input a valid file name
               It is assumed the information in each line is valid
               It is assumed each file starts with START and ends
               with STOP
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cin >> fileName;

    ifstream f;

    if (fileName == "prog13e.txt") {
      f.open(fileName);
      if (f.is_open())
          cout << f.rdbuf() << endl;
      f.close();
    }

    return 0;
}