/*
  Author: Brendon Newton
  Assignment Title: Program 11
  Assignment Description: This program opens a file, reads an
                          unknown amount of integers, and outputs
                          min, max, sum, count, and avg
  Due Date: 9/30/2022
  Date Created: 9/26/2022
  Date Last Modified: 9/26/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                    Input Output manipulation library included
                    ifstream dataFile and string fileName created
                    to open users input file
                    min, max, sum, count, and average created to
                    calculate
                    bool isValid used to check fail state

  Input: Reads input and opens input file
         If file fails to open, the program loops until a valid
         file name is entered

  Process: Loop calculates the min, max, sum, and count of all of the
           numbers in the file
           Avg is calculated using sum

  Output: Setprecision manipulator used
          Avg, min, max, sum, and count are printed to screen

  Assumptions: It is assumed that the user will input the numbers
               correctly
               It is assumed the user will eventually enter a valid
               file name
               It is assumed the user will not include floats in their
               file

*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    //Data Abstraction
    string fileName;
    ifstream dataFile;
    bool isValid = true;
    int min, max, sum = 0, count = 0, currNum;
    double average;

    //Input
    do {
        cout << "Enter Data File Name: ";
        cin >> fileName;
        cout << fileName << endl;

        dataFile.open(fileName);

        if (!dataFile.is_open()) {
            isValid = false;
        }
        else {
            isValid = true;
        }
        if (!isValid) {
            cout << "Error: File Not Open." << endl;
        }
    }
    while (!isValid);

    //Process
    while (dataFile >> currNum && !dataFile.eof()) {
        //First round
        if (count == 0) {
            max = currNum;
            min = currNum;
            sum = sum + currNum;
            ++count;
        }
        //Other rounds
        else {
            max = (currNum > max) ? currNum : max;
            min = (currNum < min) ? currNum : min;
            sum = sum + currNum;
            ++count;
        }
    }

    dataFile.close();

    average = (sum / (count * 1.0));

    //Output
    cout << fixed << setprecision(2);
    
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << "Average = " << average << endl; 

    return 0;
}