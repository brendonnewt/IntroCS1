/*
Author: Brendon Newton
Assignment Title: Program 5
Assignment Description: Calculates 5 numbers arithmetic mean, geometric mean, 
                        harmonic mean, and standard deviation. Then, the results
                        are sorted from greatest to least.
Due Date: 9/9/2022
Date Created: 9/7/2022
Date Last Modified: 9/7/2022

Data Abstraction: Integers n1 , n2 , n3 , n4 , and n5 are 
                  created to hold the input values and doubles
                  arithmeticMean, geometricMean, harmonicMean, and
                  standardDeviation are created to store the 
                  calculations of the five integers. Iostream is 
                  included for cin and cout, iomanip is included
                  for setprecision, and cmath is included for pow() and sqrt(). 
Input: The Program accepts five integers
Process: The numbers are sorted from greatest to least using a series of
         if statements. Then, the final calculations are made and rounded
         to two decimal places.
Output: The five integers are printed to the console greatest to least and the
        arithmetic, geometric, and harmonic means as well as the standard 
        deviation are printed.
Assumptions:
            The main assumption for this program is that the user will 
            not input any floating numbers
            It is assumed that the user doesn't want to input more than 
            five numbers
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    //Data Abstraction

    int n1 , n2 , n3 , n4 , n5;
    double arithmeticMean, geometricMean, harmonicMean, standardDeviation;

    //Input

    cout << "Enter five numbers:" << endl;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    //Echo Print

    cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl; 
    
    //Spacing

    cout << endl;
    cout << endl << endl;

    //Process
    
    if (n1 < n2) {

        swap(n1 , n2);

    } 

    if (n1 < n3) {

        swap(n1 , n3);

    } 

    if (n1 < n4) {

        swap(n1 , n4);

    } 

    if (n1 < n5) {

        swap(n1 , n5);
    }
    
    //Greatest int in n1

    if (n2 < n3) {

        swap(n2 , n3);

    } 

    if (n2 < n4) {

        swap(n2 , n4);

    } 

    if (n2 < n5) {

        swap(n2 , n5);

    }
    
    //Second greatest in n2

    if (n3 < n4) {

        swap(n3 , n4);

    } 

    if (n3 < n5) {

        swap(n3 , n5);

    }
    
    //Third greatest in n3

    if (n4 < n5) {

        swap(n4 , n5);

    }
    
    //Fourth greatest in n4 and fifth greatest in n5

    arithmeticMean = (n1 + n2 + n3 + n4 + n5) / 5.0;
    
    geometricMean = (1.0 * n1 * n2 * n3 * n4 * n5);
    geometricMean = pow(geometricMean , 0.20);

    
    harmonicMean = 5.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3) 
                 + (1.0 / n4) + (1.0 / n5));
    
    standardDeviation = (n1 + n2 + n3 + n4 + n5) / 5.0;
    standardDeviation = pow(n1 - standardDeviation , 2) 
                        + pow(n2 - standardDeviation , 2)
                        + pow(n3 - standardDeviation , 2) 
                        + pow(n4 - standardDeviation , 2)
                        + pow(n5 - standardDeviation , 2);
    standardDeviation = sqrt(standardDeviation / 5.0);

    cout << fixed << setprecision(2);
    
    //Output
    
    cout << "Result: " << endl << endl;

    cout << "Data:" << endl;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;

    cout << endl;

    cout << "Arithmetic Mean    = " << arithmeticMean << endl;
    cout << "Geometric  Mean    = " << geometricMean << endl;
    cout << "Harmonic  Mean     = " << harmonicMean << endl;
    cout << "Standard Deviation = " << standardDeviation << endl;

    return 0;
} 