/*
  Author: Brendon Newton
  Assignment Title: Program 17
  Assignment Description: This program defines functions
                for array processing
  Due Date: 11/04/2022
  Date Created: 12/25/2022
  Date Last Modified: 12/25/2022
*/
#ifndef ARRAYCOUNT_H
#define ARRAYCOUNT_H

#include <string>
#include <vector>
#include <cmath>

const int MAX_SIZE = 25;

/*
 Description: Takes in an int array, array size,
              and int v and returns the amount 
              of times v occurs in int a[]
 Return: Frequency int of the value v in a[]
 Precondition: a[], s, and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(int a[ ], int s, int v);

/*
 Description: Takes in a double array, array size,
              and double v and returns the amount 
              of times v occurs in double a[]
 Return: Frequency int of the value v in a[]
 Precondition: a[], s, and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(double a[ ], int s, double v);

/*
 Description: Takes in a string array, array size,
              and string v and returns the amount 
              of times v occurs in string a[]
 Return: Frequency int of v in a[]
 Precondition: a[], s, and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(std::string a[ ], int s , std::string v);

/*
 Description: Takes in a char array and char v
              and returns the amount of times
              v occurs in char a[]
 Return: Frequency int of v in a[]
 Precondition: a[] and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(char a[ ], char v);

/*
 Description: Takes in a integer vector and 
              int v and returns the amount
              of times v occurs in the vector
 Return: Frequency int of v in int vector
 Precondition: a and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(std::vector<int> a, int v);

/*
 Description: Takes in a string vector and 
              string v and returns the amount
              of times v occurs in the vector
 Return: Frequency int of v in string vector
 Precondition: a and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(std::vector<std::string> a, std::string v);

/*
 Description: Takes in a double vector and 
              double v and returns the amount
              of times v occurs in the vector
 Return: Frequency int of v in double vector
 Precondition: a and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(std::vector<double> a, double v);

/*
 Description: Takes in a char vector and 
              char v and returns the amount
              of times v occurs in the vector
 Return: Frequency int of v in char vector
 Precondition: a and v are valid
 Postcondition: All values are unchanged
*/

int arrayCount(std::vector<char> a, char v);

/*
 Description: Takes in an int matrix, int rows,
              int columns, and int v and returns 
              the amount of times v occurs in
              the matrix
 Return: Frequency int of v in int matrix
 Precondition: a[][], r, c, and v are valid
 Postcondition: All values are unchanged
*/

int matrixCount(int m[ ][MAX_SIZE], int r, int c, int v);

/*
 Description: Takes in a char matrix, int rows,
              int columns, and char v and returns 
              the amount of times v occurs in
              the char matrix
 Return: Frequency int of v in char matrix
 Precondition: a[][], r, c, and v are valid
 Postcondition: All values are unchanged
*/

int matrixCount(char m[ ][MAX_SIZE], int r, int c, char v);

/*
 Description: Takes in a string matrix, int rows,
              int columns, and string v and returns 
              the amount of times v occurs in
              the string matrix
 Return: Frequency int of v in string matrix
 Precondition: a[][], r, c, and v are valid
 Postcondition: All values are unchanged
*/

int matrixCount(std::string m[ ][MAX_SIZE], int r, int c, std::string v);

#endif