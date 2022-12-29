/*
    Author: Brendon Newton
    Assignment Title: Program 19
    Assignment Description: This program declares functions
                            for the matrix_t class
    Due Date: 11/18/2022
    Date Created: 12/28/2022
    Date Last Modified: 12/29/2022
*/

#ifndef MATRIX_H_
#define MATRIX_H_


#include <ostream>
using namespace std;

const int MAX_SIZE = 100;
const int WIDTH = 4;

class matrix_t {
private:
    int row, col;
    double data[MAX_SIZE][MAX_SIZE] = {{0}};

public:
    
    /*
    Description: Default constructor
    Return: None
    Precondition: No input row or col values
    Postcondition: row = 0 and col = 0
    */
    
    matrix_t();

    /*
    Description: Custom Constructor
    Return: None
    Precondition: Both arguments are ints
    Postcondition: row and col equal user input values
    */

    matrix_t(int, int);

    /*
    Description: Mutator that sets the row value
    Return: None
    Precondition: Argument is an int
    Postcondition: row = argument
    */

    void setRow(int);

    /*
    Description: Mutator that sets the col value
    Return: None
    Precondition: Argument is an int
    Postcondition: col = argument
    */

    void setCol(int);

    /*
    Description: Mutator that sets the data value
                 at row, column
    Return: None
    Precondition: row and column are ints, data
                  value is a double
    Postcondition: data[int r][int c] = value
    */

    void setValue(int, int, double);

    /*
    Description: Acessor that gets the row value
    Return: Number of rows
    Precondition: Rows has been set
    Postcondition: row is not changed
    */

    int getRow() const;

    /*
    Description: Acessor that gets the col value
    Return: Number of cols
    Precondition: Cols has been set
    Postcondition: col is not changed
    */

    int getCol() const;

    /*
    Description: Acessor that gets the value at
                 row, column
    Return: Value
    Precondition: Value at row, column has been set
    Postcondition: row, col, and value are not changed
    */

    double getValue(int, int) const;

    /*
    Description: Displays a vector to an output stream
    Return: None
    Precondition: All matrix values have been set
    Postcondition: Values are not changed
                   rows and cols are not changed
    */

    void display(ostream&) const;

    /*
    Description: Adds two matrices
    Return: Result matrix
    Precondition: Values for both matrices have been set
                  Both matrices are of equal size
    Postcondition: Matrix values are not changed
    */

    matrix_t add(const matrix_t&) const;

    /*
    Description: Substracts two matrices
    Return: Result matrix
    Precondition: Values for both matrices have been set
                  Both matrices are of equal size
    Postcondition: Matrix values are not changed
    */

    matrix_t subtract(const matrix_t&) const;

    /*
    Description: Multiplies two matrices
    Return: Result matrix
    Precondition: Values for both matrices have been set
    Postcondition: Matrix values are not changed
    */

    matrix_t multiply(const matrix_t&) const;

    /*
    Description: Operator for matrix addition
    Return: The return of the matrix.add(other)
    Precondition: Values for both matrices have been set
                  Both matrices are of equal size
    Postcondition: Matrix values are not changed
    */

    matrix_t operator+(const matrix_t&) const;

    /*
    Description: Operator for matrix subtraction
    Return: The return of the matrix.subtract(other)
    Precondition: Values for both matrices have been set
                  Both matrices are of equal size
    Postcondition: Matrix values are not changed
    */

    matrix_t operator-(const matrix_t&) const;

    /*
    Description: Operator for matrix multiplication
    Return: The return of the matrix.multiply(other)
    Precondition: Values for both matrices have been set
    Postcondition: Matrix values are not changed
    */

    matrix_t operator*(const matrix_t&) const;

    /*
    Description: Operator for matrix[], allows for the
                 use of matrix[r][c]
    Return: data[n]
    Precondition: Argument is a row number in the data array
    Postcondition: Matrix value is not changed
    */

    double*  operator[](int n);

};


#endif /* MATRIX_H_ */