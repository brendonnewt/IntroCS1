/*
    Author: Brendon Newton
    Assignment Title: Program 19
    Assignment Description: This program defines functions
                            for the matrix_t class
    Due Date: 11/18/2022
    Date Created: 12/28/2022
    Date Last Modified: 12/29/2022
*/

#include "matrix.h"
#include <iomanip>

using namespace std;

matrix_t::matrix_t() {
    row = 0;
    col = 0;
}

matrix_t::matrix_t(int row, int col) {
    this->row = row;
    this->col = col;
}

void matrix_t::setRow(int row){
    this->row = row;
}

void matrix_t::setCol(int col){
    this->col = col;
}

void matrix_t::setValue(int r, int c, double value) {
    data[r][c] = value;
}

int matrix_t::getRow() const {
    return row;
}
int matrix_t::getCol() const {
    return col;
}

double matrix_t::getValue(int r, int c) const {
    return data[r][c];
}

void matrix_t::display(ostream& stream) const {

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            stream << setfill(' ') << setw(9) << right;
            stream << data[r][c];
        }
        stream << endl;
    }
}

matrix_t matrix_t::add(const matrix_t& other) const {
    matrix_t result(row, col);

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            result[r][c] = data[r][c] + other.data[r][c];
        }
    }
    return result;
}

matrix_t matrix_t::subtract(const matrix_t& other) const {
    matrix_t result(row, col);

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            result[r][c] = data[r][c] - other.data[r][c];
        }
    }
    return result;
}

matrix_t matrix_t::multiply(const matrix_t& other) const {
    matrix_t result;
    int numTimesAdded = 0;

    //Gets dot product rows and N iterations
    if (getRow() < other.getRow()) {
        result.row = getRow();
        numTimesAdded = getCol();
    }
    else {
        result.row = other.getRow();
        numTimesAdded = other.getCol();
    }

    //Gets dot product cols
    if (getCol() < other.getCol()) {
        result.col = getCol();
    }
    else {
        result.col = other.getCol();
    }

    //Makes dot product
    for (int r = 0; r < result.getRow(); r++) {
        for (int c = 0; c < result.getCol(); c++) {
            result.data[r][c] = 0;
            for (int n = 0; n < numTimesAdded; n++) {
                result[r][c] += (data[r][n] * other.data[n][c]);
            }
        }
    } 
    return result;
}

matrix_t matrix_t::operator+(const matrix_t& other) const {
    return add(other);
}

matrix_t matrix_t::operator-(const matrix_t& other) const {
    return subtract(other);
}

matrix_t matrix_t::operator*(const matrix_t& other) const {
    return multiply(other);
}

double* matrix_t::operator[](int n) {
    return data[n];
}
