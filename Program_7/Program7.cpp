/*
  Author: Brendon Newton
  Assignment Title: Program 7
  Assignment Description: This program takes five numbers and prints the
                        min, max, and median
  Due Date: 9/16/2022
  Date Created: 9/10/2022
  Date Last Modified: 9/10/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                    Input Output manipulation library included
                    variables n1, n2, n3, n4, and n5, are declared to hold
                    and sort input values
                    min, max, and median are declared for use in output
                    char grade declared to hold letter grade
                    isValid declared for use in process

  Input: The program reads in five doubles from the user, assigns the values
        to n1-5, and echo prints the values

  Process: Program checks if all input values are valid
          Average is calculated an assigned appropriate letter grade
          Values n1-5 are sorted from least to greatest
          Variable min is assigned the least value, max assigned the 
          greatest, and median is assigned the middle value

  Output: The avg and grade are printed to the screen
          The min, max, and median are printed to the screen

  Assumptions: It is assumed that the user only wants to use five numbers
               It is assumed that data will be input correctly

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  //Data Abstraction

  double n1, n2, n3, n4, n5;
  double avg, min, max, median;
  char grade;
  bool isValid;

  //Input

  cout << "Please Enter Five Test Scores." << endl;

  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  cout << showpoint << fixed << setprecision(2);

  cout << n1 << " ";
  cout << n2 << " ";
  cout << n3 << " ";
  cout << n4 << " ";
  cout << n5 << endl;

  //Process

  if (n1 < 0 || n1 > 100)

    isValid = false;

  else if (n2 < 0 || n2 > 100)

    isValid = false;

  else if (n3 < 0 || n3 > 100)

    isValid = false;

  else if (n4 < 0 || n3 > 100)

    isValid = false;

  else if (n5 < 0 || n5 > 100)

    isValid = false;

  else

    isValid = true;

 

  //Values have been checked for validity

  if (isValid) {

    avg = ((n1 + n2 + n3 + n4 + n5) / 5);
    
    if (avg >= 89.5)

      grade = 'A';

    else if (avg >= 79.5)

      grade = 'B';

    else if (avg >= 69.5)

      grade = 'C';

    else if (avg >= 59.5)

      grade = 'D';

    else

      grade = 'F';

    //Letter grade calculated

    if (n1 > n2)

      swap(n1, n2);

    if (n1 > n3)

      swap(n1, n3);

    if (n1 > n4)

      swap(n1, n4);

    if (n1 > n5)

      swap(n1, n5);

    //n1 is smallest number

    if (n2 > n3)

      swap(n2, n3);

    if (n2 > n4)

      swap(n2, n4);

    if (n2 > n5)

      swap(n2, n5);

    if (n3 > n4)

      swap(n3, n4);

    if (n3 > n5)

      swap(n3, n5);

    //n3 is the median

    if (n4 > n5)

      swap(n4, n5);

    //All numbers sorted from least to greatest

    min = n1;
    max = n5;
    median = n3;

    //Output

    cout << fixed << setprecision(2);

    cout << "Average = " << avg << endl;
    cout << "Grade   = " << grade << endl;
    cout << "Min     = " << min << endl;
    cout << "Max     = " << max << endl;
    cout << "Median  = " << median << endl;

  }

  if (!isValid)

    cout << "Error: BAD DATA" << endl;

  return 0;
}

