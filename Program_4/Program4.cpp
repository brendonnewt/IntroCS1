/*
Author: Brendon Newton
Assignment Title: Sum The Digits In An Integer
Assignment Description: This Program finds the sum of the digits
                        of a random integer.
Due Date: 9/2/2022
Date Created: 8/29/2022
Date Last Modified: 8/29/2022
*/

/*
Data Abstraction: 
                  Input Output Stream is opened,
                  variables N and Sum are declared
                  for use to calculate the digits and
                  sum of the digits.
Input: 
       The program accepts a random number input between
       0 and 9999999
Process: 
         A modulus is used to find the digits value and
         N is divided by 10 to shift the digits place
Output: 
        The appropriate statements are printed along with 
        the random integer and the sum of its digits
Assumptions: 
             It is assumed that the random number is in the range the
             user wants
             It is assumed the user doesn't want to input their own
             number          
*/

#include <iostream>
#include <cstdlib>

using namespace std;
int main() {

    //Data Abstraction
    int N;
    int Sum = 0;
   
    //Input
    cin >> N;

    //Process
    cout << "Enter an integer between 0 and 9999999: " << N << endl;

    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    Sum += N % 10;
    N /= 10;
    
    //Output
    cout << "The sum of the digits is " << Sum << "." << endl;
    
    return 0;
}