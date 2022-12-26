/*
  Author: Brendon Newton
  Assignment Title: Program 12
  Assignment Description: This program reads in a message from
                          an input file and either encrypts or
                          decrypts the message according to user
                          instructions
  Due Date: 9/30/2022
  Date Created: 12/19/2022
  Date Last Modified: 12/19/2022
*/

/*
  Data Abstraction: IOstream included, String library included,
                    Filestream included
                    Input filestream and output filestream declared
                    fileName declared to store user input
                    Instruction declared to store users instruction
                    isBad and badInput created to check validity
                    currChar created to encrypt/decrypt
                    userMessage created to store output message


  Input: Reads file name and instruction from user
         Opens file and checks fail state

  Process: Checks instruction validity
           Encrypts or decrypts message
           Counts values in the input message

  Output: Outputs modified message to screen and output file
          Outputs vowel counts

  Assumptions: It is assumed the user will input a valid file name
               It is assumed the user will input valid instructions
               It is assumed all files input are not empty
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    
    //Data Abstraction

    ifstream inFS;
    ofstream outFS;
    string fileName, instruction, userMessage;
    char currChar;
    bool isBad = false;
    bool badInput = false;
    int aCount = 0, eCount = 0, iCount = 0,
    oCount = 0, uCount = 0, yCount = 0;

    //Input

    cout << "Enter file name: ";
    getline(cin, fileName);
    cout << fileName << endl;
    cout << "Enter encrypt or decrypt: ";
    cin >> instruction;
    cout << instruction << endl;
    outFS.open("message");

    //Open FS
    inFS.open(fileName);
    if (!inFS.is_open()) {
        isBad = true;
    }

    //Process

    //Checks instruction validity
    if ((instruction != "encrypt") && (instruction != "decrypt")) {
        badInput = true;
    }

    //Copies file info into userMessage and closes inFS
    while (inFS.get(currChar)) {
        if (tolower(currChar) == 'a') {
            aCount++;
        }
        if (tolower(currChar) == 'e') {
            eCount++;
        }
        if (tolower(currChar) == 'i') {
            iCount++;
        }
        if (tolower(currChar) == 'o') {
            oCount++;
        }
        if (tolower(currChar) == 'u') {
            uCount++;
        }
        if (tolower(currChar) == 'y') {
            yCount++;
        }
        if (instruction == "encrypt") {
            currChar += 3;
        }
        if (instruction == "decrypt") {
            currChar -= 3;
        }

        userMessage += currChar;
    }

    //Output

    if (badInput) {
        cout << "Error: Bad command." << endl;
    }
    if (isBad) {
        cout << "Error: File did NOT open." << endl;
    }
    else {
        cout << endl;
        cout << userMessage << endl << endl;
        cout << "Letter Frequency" << endl << endl;
        cout << "   A    " << aCount << endl;
        cout << "   E    " << eCount << endl;
        cout << "   I    " << iCount << endl;
        cout << "   O    " << oCount << endl;
        cout << "   U    " << uCount << endl;
        cout << "   Y    " << yCount << endl;

        outFS << userMessage << endl;
    }

    inFS.close();
    outFS.close();

    return 0;
}