/*
  Author: Brendon Newton
  Assignment Title: Program 10
  Assignment Description: This program reads in three file names and
                          calculates the avg start and stop times of
                          the times in the three files
  Due Date: 9/28/2022
  Date Created: 9/23/2022
  Date Last Modified: 9/25/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                    Cmath library opened
                    File Stream is opened
                    Input and output file streams opened
                    start time and stop time variables are
                    nitialized to hold values
                    temp declared to skip non integers
                    AMPM declared to determine and calculate AM and PM
                    values
                    isValid intitialized to true to check fail state
                    Files 1-3 declared to hold file info

  Input: The program reads in file names and opens files
         Checks state of stream
         Reads in times

  Process: Calculates total start and stop time
           Calculates total average
           Calculates avg hours, minutes, seconds
           Converts to AM or PM

  Output: Outputs result to the output file and screen

  Assumptions: It is assumed that the user will input the numbers
               correctly
               It is assumed the user doesn't want to use more/less
               than three files
               It is assumed the user wants the times to be rounded
               up/down to the nearest minute


*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    //Data Abstraction
    bool isValid = true;
    bool isPM1, isPM2,
         singleDigitStopM, singleDigitStartM;
    string fileName1, fileName2,
           fileName3, AMPM1,
           AMPM2, AMPM3, AMPM4, AMPM5,
           AMPM6, temp, singleDigitM;
    int startH1, startH2, startH3,
        stopH1, stopH2, stopH3,
        startM1, startM2, startM3,
        stopM1, stopM2, stopM3,
        startS1, startS2, startS3,
        stopS1, stopS2, stopS3,
        totalStartSec1, totalStartSec2,
        totalStartSec3, totalStopSec1,
        totalStopSec2, totalStopSec3,
        totalAvgStopSec, totalAvgStartSec,
        totalStopSec, totalStartSec,
        avgStartH, avgStartM,
        avgStopH, avgStopM;
    ifstream inFS1, inFS2, inFS3;
    char colonEat;

    //Input
    cin >> fileName1 >> fileName2 >> fileName3;

    //Open and check all filestreams
    inFS1.open(fileName1);
    inFS2.open(fileName2);
    inFS3.open(fileName3);

    if (!inFS1.is_open() || !inFS2.is_open() || !inFS3.is_open()) {
        isValid = false;
    }

    //Read all values
    inFS1 >> temp >> startH1 >> colonEat >> startM1
          >> colonEat >> startS1 >> AMPM1;
    inFS1 >> temp >> stopH1 >> colonEat >> stopM1
          >> colonEat >> stopS1 >> AMPM2;
    inFS2 >> temp >> startH2 >> colonEat >> startM2
          >> colonEat >> startS2 >> AMPM3;
    inFS2 >> temp >> stopH2 >> colonEat >> stopM2
          >> colonEat >> stopS2 >> AMPM4;
    inFS3 >> temp >> startH3 >> colonEat >> startM3
          >> colonEat >> startS3 >> AMPM5;
    inFS3 >> temp >> stopH3 >> colonEat >> stopM3
          >> colonEat >> stopS3 >> AMPM6;

    //Close ifstream
    inFS1.close();
    inFS2.close();
    inFS3.close();

    //Process

    //Calculate total start time
    startH1 %= 12;

    if (AMPM1 == "PM") {
        startH1 += 12;
    }

    totalStartSec1 = (startH1 * 3600) + (startM1 * 60) + startS1;

    startH2 %= 12;

    if (AMPM3 == "PM") {
        startH2 += 12;
    }

    totalStartSec2 = (startH2 * 3600) + (startM2 * 60) + startS2;

    startH3 %= 12;

    if (AMPM5 == "PM") {
        startH3 += 12;
    }

    totalStartSec3 = (startH3 * 3600) + (startM3 * 60) + startS3;

    totalStartSec = (totalStartSec1 + totalStartSec2 + totalStartSec3);

    //Calculate total stop time
    stopH1 %= 12;

    if (AMPM2 == "PM") {
        stopH1 += 12;
    }

    totalStopSec1 = (stopH1 * 3600) + (stopM1 * 60) + stopS1;

    stopH2 %= 12;

    if (AMPM4 == "PM") {
        stopH2 += 12;
    }

    totalStopSec2 = (stopH2 * 3600) + (stopM2 * 60) + stopS2;

    stopH3 %= 12;

    if (AMPM6 == "PM") {
        stopH3 += 12;
    }

    totalStopSec3 = (stopH3 * 3600) + (stopM3 * 60) + stopS3;

    totalStopSec = (totalStopSec1 + totalStopSec2 + totalStopSec3);

    //Calculate average
    totalAvgStartSec = floor(totalStartSec / 3.0);

    totalAvgStopSec = ceil(totalStopSec / 3.0);

    //Calculate avg hours, minutes, seconds
    avgStartH = (totalAvgStartSec / 3600.0);
    avgStartM = floor((totalAvgStartSec % 3600) / 60.0);

    avgStopH = (totalAvgStopSec / 3600);
    avgStopM = ceil((totalAvgStopSec % 3600) / 60.0);

    //Convert AMPM
    
    if (avgStartH >= 12) {
        avgStartH %= 12;
        isPM1 = true;
    }
    if (avgStopH >= 12) {
        avgStopH %= 12;
        isPM2 = true;
    }
    avgStartH = (avgStartH == 0) ? 12 : avgStartH;
    avgStopH = (avgStopH == 0) ? 12 : avgStopH;

    //Check leading zeros
    if (avgStartM < 10) {
        singleDigitStartM = true;
    }
    if (avgStopM < 10) {
        singleDigitStopM = true;
    }

    //Output

    if (!isValid) {
        cout << "Error: At Least One File Failed To Open." << endl;
    }
    else  {
        cout << "Average Start Time: " << avgStartH << ":";
        
        if (singleDigitStartM) {
            cout << "0" << avgStartM << ":00";
        }
        else {
            cout << avgStartM << ":00";
        }

        if (isPM1) {
            cout << "PM" << endl;
        }
        else {
            cout << "AM" << endl;
        }

        cout << "Average Stop Time: " << avgStopH << ":";

        if (singleDigitStopM) {
            cout << "0" << avgStopM << ":00";
        }
        else {
            cout << avgStopM << ":00";
        }

        if (isPM2) {
            cout << "PM" << endl;
        }
        else {
            cout << "AM" << endl;
        }
    }

    return 0;
}