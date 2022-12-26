/*
  Author: Brendon Newton
  Assignment Title: Program 16
  Assignment Description: This program Tests the functions in
                          the myFunctions header file
  Due Date: 10/28/2022
  Date Created: 12/24/2022
  Date Last Modified: 12/25/2022
*/

/*
  Data Abstraction: IOstream included to output test results
                    myFunctions.h included
                    ints made to record test results

  Input: Set values are input to test each function

  Process: Tests each of the functions in the file

  Output: Outputs the results

  Assumptions: The precondition for every function is met
               The input values are not changed
*/

#include <iostream>
#include "myFunctions.h"

using namespace std;

int main() {

  //Data Abstraction

  int maxIntTest = 0;
  int maxDoubleTest = 0;
  int maxIntArrayTest = 0;
  int maxDoubleArrayTest = 0;
  int minIntTest = 0;
  int minDoubleTest = 0;
  int minIntArrayTest = 0;
  int minDoubleArrayTest = 0;
  int intAbsoluteValueTest = 0;
  int doubleAbsoluteValueTest = 0;
  int factorialTest = 0;
  int combinationTest = 0;
  int permutationTest = 0;

  //Input

  int a[5] = {5, 3, -2, 4, 0};
  int b[8] = {5, 3, -2, 4, 0, 12, 2, 5};
  int c[2] = {0, -4};
  int d[1] = {-9};

  double a2[5] = {5.0, 3.2, -2.7, 4.2, 0.0};
  double b2[8] = {5.0, 3.2, -2.7, 4.8, 00.0, 12.7, 2.2, 5.1};
  double c2[2] = {0.00, -4.12};
  double d2[1] = {-9.0};

  //Process

  if (max(3, -5) == 3) {
    maxIntTest++;
  }
  if (max(0, -8) == 0) {
    maxIntTest++;
  }
  if (max(5, 10) == 10) {
    maxIntTest++;
  }
  if (max(-3, -6) == -3) {
    maxIntTest++;
  }

  if (max(5.5, 1.7) == 5.5) {
    maxDoubleTest++;
  }
  if (max(-8.3, -3.6) == -3.6) {
    maxDoubleTest++;
  }
  if (max(0.0, 0.01) == .01) {
    maxDoubleTest++;
  }
  if (max(1.23, 1.23) == 1.23) {
    maxDoubleTest++;
  }

  if (max(a, 5) == 5) {
    maxIntArrayTest++;
  }
  if (max(b, 8) == 12) {
    maxIntArrayTest++;
  }
  if (max(c, 2) == 0) {
    maxIntArrayTest++;
  }
  if (max(d, 1) == -9) {
    maxIntArrayTest++;
  }

  if (max(a2, 5) == 5.0) {
    maxDoubleArrayTest++;
  }
  if (max(b2, 8) == 12.7) {
    maxDoubleArrayTest++;
  }
  if (max(c2, 2) == 0.00) {
    maxDoubleArrayTest++;
  }
  if (max(d2, 1) == -9.0) {
    maxDoubleArrayTest++;
  }

  if (min(3, -5) == -5) {
    minIntTest++;
  }
  if (min(0, -8) == -8) {
    minIntTest++;
  }
  if (min(5, 10) == 5) {
    minIntTest++;
  }
  if (min(-3, -6) == -6) {
    minIntTest++;
  }

  if (min(5.5, 1.7) == 1.7) {
    minDoubleTest++;
  }
  if (min(-8.3, -3.6) == -8.3) {
    minDoubleTest++;
  }
  if (min(0.0, 0.01) == 0.0) {
    minDoubleTest++;
  }
  if (min(1.23, 1.23) == 1.23) {
    minDoubleTest++;
  }

  if (min(a, 5) == -2) {
    minIntArrayTest++;
  }
  if (min(b, 8) == -2) {
    minIntArrayTest++;
  }
  if (min(c, 2) == -4) {
    minIntArrayTest++;
  }
  if (min(d, 1) == -9) {
    minIntArrayTest++;
  }

  if (min(a2, 5) == -2.7) {
    minDoubleArrayTest++;
  }
  if (min(b2, 8) == -2.7) {
    minDoubleArrayTest++;
  }
  if (min(c2, 2) == -4.12) {
    minDoubleArrayTest++;
  }
  if (min(d2, 1) == -9.0) {
    minDoubleArrayTest++;
  }

  if (absoluteValue(5) == 5) {
    intAbsoluteValueTest++;
  }
  if (absoluteValue(-8) == 8) {
    intAbsoluteValueTest++;
  }
  if (absoluteValue(0) == 0) {
    intAbsoluteValueTest++;
  }
  if (absoluteValue(-1) == 1) {
    intAbsoluteValueTest++;
  }

  if (absoluteValue(5.5) == 5.5) {
    doubleAbsoluteValueTest++;
  }
  if (absoluteValue(-8.3) == 8.3) {
    doubleAbsoluteValueTest++;
  }
  if (absoluteValue(0.00) == 0.00) {
    doubleAbsoluteValueTest++;
  }
  if (absoluteValue(-1.0) == 1.0) {
    doubleAbsoluteValueTest++;
  }

  if (factorial(5) == 120) {
    factorialTest++;
  }
  if (factorial(8) == 40320) {
    factorialTest++;
  }
  if (factorial(0) == 1) {
    factorialTest++;
  }
  if (factorial(2) == 2) {
    factorialTest++;
  }

  if (combination(5, 3) == 10) {
    combinationTest++;
  }
  if (combination(8, 2) == 28) {
    combinationTest++;
  }
  if (combination(4, 4) == 1) {
    combinationTest++;
  }
  if (combination(12, 6) == 924) {
    combinationTest++;
  }
  
  if (permutation(5, 3) == 60) {
    permutationTest++;
  }
  if (permutation(8, 2) == 56) {
    permutationTest++;
  }
  if (permutation(4, 4) == 24) {
    permutationTest++;
  }
  if (permutation(0, 0) == 1) {
    permutationTest++;
  }

  //Output

  if (minIntTest == 4) {
    cout << "Pass - min(int, int) functions" << endl;
  }
  if (minDoubleTest == 4) {
    cout << "Pass - min(double, double) functions" << endl;
  }
  if (minIntArrayTest == 4) {
    cout << "Pass - min(int [], int) functions" << endl;
  }
  if (minDoubleArrayTest == 4) {
    cout << "Pass - min(double [], int) functions" << endl;
  }
  if (maxIntTest == 4) {
    cout << "Pass - max(int, int) functions" << endl;
  }
  if (maxDoubleTest == 4) {
    cout << "Pass - max(double, double) functions" << endl;
  }
  if (maxIntArrayTest == 4) {
    cout << "Pass - max(int [], int) functions" << endl;
  }
  if (maxDoubleArrayTest == 4) {
    cout << "Pass - max(double [], int) functions" << endl;
  }
  if (intAbsoluteValueTest == 4) {
    cout << "Pass - absoluteValue(int) functions" << endl;
  }
  if (doubleAbsoluteValueTest == 4) {
    cout << "Pass - absoluteValue(double) functions" << endl;
  }
  if (factorialTest == 4) {
    cout << "Pass - factorial(int) functions" << endl;
  }
  if (combinationTest == 4) {
    cout << "Pass - combination(int, int) functions" << endl;
  }
  if (permutationTest == 4) {
    cout << "Pass - permutation(int, int) functions" << endl;
  }

  return 0;
}

int max(int n1, int n2) {
  int maxVal;

  if (n1 > n2) {
    maxVal = n1;
  }
  else if (n2 > n1) {
    maxVal = n2;
  }
  else {
    maxVal = n1;
  }
  return maxVal;
}

double max(double n1, double n2) {
  double maxVal;

  if (absoluteValue(n1 - n2) < 0.000001) {
    maxVal = n1;
  }
  else if (n1 > n2) {
    maxVal = n1;
  }
  else if (n2 > n1) {
    maxVal = n2;
  }
  return maxVal;
}

int max(int m[], int n) {
  int maxVal = m[0];

  for (int i = 0; i < n; i++) {
    if (m[i] > maxVal) {
      maxVal = m[i];
    }
  }
  return maxVal;
}

double max(double m[], int n) {
  double maxVal = m[0];

  for (int i = 0; i < n; i++) {
    if (m[i] > maxVal) {
      maxVal = m[i];
    }
  }
  return maxVal;
}

int min(int n1, int n2) {
  int minVal;

  if (n1 < n2) {
    minVal = n1;
  }
  else if (n2 < n1) {
    minVal = n2;
  }
  else {
    minVal = n1;
  }
  return minVal;
}

double min(double n1, double n2) {
  double minVal;

  if (absoluteValue(n1 - n2) < 0.000001) {
    minVal = n1;
  }
  if (n1 < n2) {
    minVal = n1;
  }
  else if (n2 < n1) {
    minVal = n2;
  }
  return minVal;
}

int min(int m[], int n) {
  int minVal = m[0];

  for (int i = 0; i < n; i++) {
    if (m[i] < minVal) {
      minVal = m[i];
    }
  }
  return minVal;
}

double min(double m[], int n) {
  double minVal = m[0];

  for (int i = 0; i < n; i++) {
    if (m[i] < minVal) {
      minVal = m[i];
    }
  }
  return minVal;
}

int absoluteValue(int n) {
  int outputN;

  if (n < 0) {
    outputN = (n * -1);
  }
  else {
    outputN = n;
  }
  return outputN;
}

double absoluteValue(double n) {
  double outputN;
  
  if (n < 0) {
    outputN = (n * -1.0);
  }
  else {
    outputN = n;
  }
  return outputN;
}

double factorial(int n) {
  double outputN = n;

  if (n == 0) {
    outputN = 1.0;
  }
  else if (n > 0) {
    for (int i = n - 1; i > 0; i--) {
      outputN *= i;
    }
  }
  return outputN;
}

double combination(int n1, int n2) {
  double outputN;

  outputN = factorial(n1) / (factorial(n2) * factorial(n1 - n2));
  return outputN;
}

double permutation(int n1, int n2) {
  double outputN;

  outputN = factorial(n1) / factorial(n1 - n2);
  return outputN;
}
