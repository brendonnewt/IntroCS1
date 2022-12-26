/*
  Author: Brendon Newton
  Assignment Title: Program 16
  Assignment Description: This program Tests the functions in
                          the myFunctions header file
  Due Date: 10/28/2022
  Date Created: 12/24/2022
  Date Last Modified: 12/25/2022
*/

#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

/*
  Precondition: Two integer values exist

  Postcondition: The value of the largest integer is returned.
                 The original integers are unchanged
                 If the integers have the same value then 
                 the value of either integer is returned.

  Return: Integer

  Description: Function returns the value of the larger of 
               two integers.
*/

int max(int n1, int n2);

/*
  Precondition: Two double values exist

  Postcondition: The value of the largest double is returned.
                 The original doubles are unchanged
                 If the doubles have the same value then 
                 the value of either double is returned.

  Return: Double

  Description: Function returns the value of the larger of 
               two doubles.
*/

double max(double n1, double n2);

/*
  Precondition: An array of integer values exists

  Postcondition: The largest value in the array is returned.
                 The original array is unchanged

  Return: Integer

  Description: Function returns the value of the largest
               integer in an array.
*/

int max(int m[], int n);

/*
  Precondition: An array of double values exists

  Postcondition: The largest value in the array is returned.
                 The original array is unchanged

  Return: Double

  Description: Function returns the value of the largest
               double in an array.
*/

double max(double m[], int n);

/*
  Precondition: Two integer values exist

  Postcondition: The value of the smallest integer is returned.
                 The original integers are unchanged
                 If the integers have the same value then 
                 the value of either integer is returned.

  Return: Integer

  Description: Function returns the value of the smaller of 
               two integers.
*/

int min(int n1, int n2);

/*
  Precondition: Two double values exist

  Postcondition: The value of the smallest double is returned.
                 The original doubles are unchanged
                 If the doubles have the same value then 
                 the value of either double is returned.

  Return: Double

  Description: Function returns the value of the smaller of 
               two doubles.
*/

double min(double n1, double n2);

/*
  Precondition: An array of integer values exists

  Postcondition: The smallest value in the array is returned.
                 The original array is unchanged

  Return: Integer

  Description: Function returns the value of the smallest
               integer in an array.
*/

int min(int m[], int n);

/*
  Precondition: An array of double values exists

  Postcondition: The smallest value in the array is returned.
                 The original array is unchanged

  Return: Double

  Description: Function returns the value of the smallest
               double in an array.
*/

double min(double m[], int n);

/*
  Precondition: Some integer value exists

  Postcondition: Integer value is unchanged

  Return: Integer

  Description: This function returns the absolute value of an integer.
*/

int absoluteValue(int n);

/*
  Precondition: Some double value exists

  Postcondition: Double value is unchanged

  Return: Double

  Description: This function returns the absolute value of a double.
*/

double absoluteValue(double n);

/*
  Precondition: Some integer value N exists

  Postcondition: The value of the N unchanged

  Return: Double

  Description: The function calculates factorial.
*/

double factorial(int n);

/*
  Precondition: Two integer value M and N exists

  Postcondition: The value of the M and N unchanged

  Return: The number of combinations of M items taken N at a time.
          Double

  Description: The function calculates the number of combinations of 
               M items taken N at a time.
*/

double combination(int n1, int n2);

/*
  Precondition: Two integer value M and N exists

  Postcondition: The value of the M and N unchanged

  Return: The number of permutations of M items taken N at a time.
          Double

  Description: The function calculates the number of permutations of
               M items taken N at a time.
*/

double permutation(int n1, int n2);

#endif