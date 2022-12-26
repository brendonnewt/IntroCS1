/*
  Author: Brendon Newton
  Assignment Title: Program 6
  Assignment Description: This program takes five numbers and prints the
                        min, max, and median
  Due Date: 9/14/2022
  Date Created: 9/9/2022
  Date Last Modified: 9/9/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                  variables n1, n2, n3, n4, and n5, are declared to hold
                  and sort input values
                  min, max, and median are declared for use in output

 Input: The program reads in five doubles from the user and assigns the values
        to n1-5

 Process: n1-5 are sorted from least to greatest
          min is assigned the least value, max assigned the greatest,
          and median is assigned the middle value

  Output: The min, max, and median are printed to the screen

  Assumptions: It is assumed that the user only wants to use five numbers
               It is assumed that the user will correctly input the data
*/

#include <iostream>

using namespace std;

int main() {

  //Data Abstraction

  double n1, n2, n3, n4, n5;
  double min, max, median;

  //Input

  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  cout << n1 << " ";
  cout << n2 << " ";
  cout << n3 << " ";
  cout << n4 << " ";
  cout << n5 << endl;

  //Process

  if (n1 > n2) {

    swap(n1, n2);

  } 

  if (n1 > n3) {

    swap(n1, n3);

  } 

  if (n1 > n4) {

    swap(n1, n4);

  } 

  if (n1 > n5) {

    swap(n1, n5);
   
  }

  //n1 is now the least

  if (n2 > n3) {

    swap(n2, n3);

  } 

  if (n2 > n4) {

    swap(n2, n4);

  } 

  if (n2 > n5) {

    swap(n2, n5);

  }

  //n2 is now the second least

  if (n3 > n4) {

    swap(n3, n4);

  } 

  if (n3 > n5) {

    swap(n3, n5);

  }

  //n3 is now the median

  if (n4 > n5) {

    swap(n4, n5);

  }

  //All values sorted from least to greatest

  min = n1;
  median = n3;
  max = n5;

  //Output

  cout << "Min    = " << min << endl;
  cout << "Median = " << median << endl;
  cout << "Max    = " << max << endl;

  return 0;
}