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
 Description: Function returns the value of the larger of 
              two integers.
 Return: Integer
 Precondition: Two integer values exist
 Postcondition: The value of the largest integer is returned.
                The original integers are unchanged
                If the integers have the same value then 
                the value of either integer is returned.
*/

int max(int n1, int n2);

/*
 Description: Function returns the value of the larger of 
              two doubles.
 Return: Double
 Precondition: Two double values exist
 Postcondition: The value of the largest double is returned.
                The original doubles are unchanged
                If the doubles have the same value then 
                the value of either double is returned.
*/

double max(double n1, double n2);

/*
 Description: Function returns the value of the largest
              integer in an array.
 Return: Integer
 Precondition: An array of integer values exists
 Postcondition: The largest value in the array is returned.
                The original array is unchanged
*/

int max(int m[], int n);

/*
 Description: Function returns the value of the largest
              double in an array.
 Return: Double
 Precondition: An array of double values exists
 Postcondition: The largest value in the array is returned.
                The original array is unchanged
*/

double max(double m[], int n);

/*
 Description: Function returns the value of the smaller of 
              two integers.
 Return: Integer
 Precondition: Two integer values exist
 Postcondition: The value of the smallest integer is returned.
                The original integers are unchanged
                If the integers have the same value then 
                the value of either integer is returned.
*/

int min(int n1, int n2);

/*
 Description: Function returns the value of the smaller of 
              two doubles.
 Return: Double
 Precondition: Two double values exist
 Postcondition: The value of the smaller double is returned.
                The original doubles are unchanged
                If the doubles have the same value then 
                the value of either double is returned.
*/

double min(double n1, double n2);

/*
 Description: Function returns the value of the smallest
              integer in an array.
 Return: Integer
 Precondition: An array of integer values exists
 Postcondition: The smallest value in the array is returned.
                The original array is unchanged
*/

int min(int m[], int n);

/*
 Description: Function returns the value of the smallest
              double in an array.
 Return: Double
 Precondition: An array of double values exists
 Postcondition: The smallest value in the array is returned.
                The original array is unchanged
*/

double min(double m[], int n);

/*
 Description: This function returns the absolute value 
              of an integer.
 Return: Integer
 Precondition: Some integer value exists
 Postcondition: Integer value is unchanged
*/

int absoluteValue(int n);

/*
 Description: This function returns the absolute value 
              of a double.
 Return: Double
 Precondition: Some double value exists
 Postcondition: Double value is unchanged
*/


double absoluteValue(double n);

/*
 Description: The function calculates factorial.
 Return: Double
 Precondition: Some integer value N exists
 Postcondition: The value of the N unchanged
                The factorial of N is returned
*/

double factorial(int n);

/*
 Description: The function calculates the number of
              combinations of M items taken N at a time.
 Return: The number of combinations of M items taken N
         at a time.
 Precondition: Two integer values M and N exists
 Postcondition: The value of the M and N unchanged
*/

double combination(int n1, int n2);

/*
 Description: The function calculates the number of
              perumtations of M items taken N at a time.
 Return: The number of permutations of M items taken N
         at a time.
 Precondition: Two integer values M and N exists
 Postcondition: The value of the M and N unchanged
*/

double permutation(int n1, int n2);

#endif