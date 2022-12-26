/*
  Author: Brendon Newton
  Assignment Title: Program 9
  Assignment Description: This program reads in two files and reads
                          in ten numbers and an instruction, outputting
                          the result into an output file
  Due Date: 9/23/2022
  Date Created: 9/18/2022
  Date Last Modified: 9/19/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                    Input Output manipulation library included
                    File Stream is opened
                    Input and output file streams opened
                    n1 - n10 initialized to hold values
                    currLine declared to skip empty lines
                    instruction declared to hold instruction
                    isValid intitialized to true to check fail state
                    Result declared to hold the result

  Input: The program reads in both file names

  Process: Checks fail state
           Skips first two lines of input with currLine
           Extracts n1 - n10 from inFS
           Extracts insctruction from inFS
           Performs calculations based on instruction string

  Output: Outputs result to the output file and screen

  Assumptions: It is assumed that the user will input the numbers
               correctly
               It is assumed the user doesn't want to use more/less
               than ten numbers


*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

    //Data Abstraction
    double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    string inputFile, outputFile, currLine,
           instruction;
    double result;
    ifstream inFS;
    ofstream outFS;
    int i = 0;

    //Input
    cin >> inputFile;

    cin >> outputFile;

    inFS.open(inputFile);
    outFS.open(outputFile);

    //Process

    if (!inFS.is_open() || !outFS.is_open()) {
        
        cout << "Error: File failed to open." << endl;

    } 

    else {
        
        for (i = 0; i < 2; ++i) {
            
            getline(inFS, currLine);
        
        }

        inFS >> n1 >> n2 >> n3 
             >> n4 >> n5 >> n6 
             >> n7 >> n8 >> n9 
             >> n10 >> instruction;

        inFS.close();

        if (instruction == "aav") {
            
            result = (n1 + n2 + n3 
                     + n4 + n5 + n6 
                     + n7 + n8 + n9
                     + n10);

        } 

        else if (instruction == "mav") {
            
            result = (n1 * n2 * n3
                     * n4 * n5 * n6 
                     * n7 * n8 * n9 
                     * n10);

        } 

        else if (instruction == "avg") {
            
            result = ((n1 + n2 + n3 
                     + n4 + n5 + n6 
                     + n7 + n8 + n9
                     + n10) / 10);

        } 

        else if (instruction == "dav") {
            
            result = (n1 / n2 / n3
                     / n4 / n5 / n6 
                     / n7 / n8 / n9
                     / n10);

        } 

        else if (instruction == "sav") {
            
            result = (n1 - n2 - n3 
                     - n4 - n5 - n6 
                     - n7 - n8 - n9
                     - n10);

        }

        //Output

        outFS << result << endl;

        outFS.close();

        cout << result << endl;
    }

    return 0;
}