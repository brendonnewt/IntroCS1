/*
  Author: Brendon Newton
  Assignment Title: Program 16
  Assignment Description: This program defines the functions
                          that are in myFunctions.h
  Due Date: 10/28/2022
  Date Created: 12/24/2022
  Date Last Modified: 12/25/2022
*/

#include "myFunctions.h"

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