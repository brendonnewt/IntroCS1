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
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

    //Data Abstraction

    string fileName, gobbleString, command;
    ifstream inFS;
    bool badFile = false;
    double startX, startY, endX, endY,
           totalDist, avgDist, distToStart,
           x1, y1, pointDist, x2, y2,
           avgSumDist, pointToStart;
    vector<int> xDataPoints;
    vector<int> yDataPoints;
    int dataPoints = 0;

    //Input

    //Opens file
    do {
        
        cout << "Please Enter The Name Of The Data File: ";
        cin >> fileName;
        inFS.open(fileName);
        cout << fileName << endl;

        if (!inFS.is_open()) {
            badFile = true;
            cout << "Error: File failed to open." << endl;
        }
        else {
            badFile = false;
        }

    } while (badFile);

    //Process

    //Gobbles empty header
    for (int i = 0; i < 2; i++) {

        getline(inFS, gobbleString);

    }

    totalDist = 0;
    avgSumDist = 0;

    while (inFS >> command) {
        
        inFS >> x1 >> y1;

        //Sets points when start is read
        if (command == "START") {
            startX = x1;
            startY = y1;
        }

        //Sets points when stop is read
        if (command == "STOP") {
            endX = x1;
            endY = y1;
        }
        
        //Process when Data is read
        if (command == "DATA") {
            xDataPoints.push_back(x1);
            yDataPoints.push_back(y1);
        }

    }

    size_t i = 0;

    for (i = 0; i < xDataPoints.size(); i++) {
        //Calcs points distance from start and adds to avg
        pointToStart = sqrt(pow(xDataPoints[i] - startX, 2)
        + pow(yDataPoints[i] - startY, 2));
        avgSumDist += pointToStart;

        if (i < xDataPoints.size() - 1) {
            pointDist = sqrt(pow(xDataPoints[i] - xDataPoints[i + 1], 2)
            + pow(yDataPoints[i] - yDataPoints[i + 1], 2));
            totalDist += pointDist;
        }
    }

    cout << "avgSumDist = " << avgSumDist << endl;

    dataPoints = xDataPoints.size() + 1;
    distToStart = sqrt(pow(endX - startX, 2) + pow(endY - startY, 2));
    avgDist = (avgSumDist / dataPoints);

    //Output

    cout << fixed << setprecision(1) << endl;
    cout << "Final Location: (" << endX << ", " << endY
         << ")" << endl;
    cout << "Total distance traveled " << totalDist << endl;
    cout << "Distance to starting point " << distToStart << endl;
    cout << "Average distance to start point = " << avgDist << endl;



    inFS.close();

    return 0;
}