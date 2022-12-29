#include "matrix.h"
#include <iostream>

using namespace std;

int main() {
	
	/*
	matrix_t myMatrix;

	if (myMatrix.getRow() != 0) {
		cout << "myMatrix row default != 0" << endl;
	}

	cout << "default row = " << myMatrix.getRow();

	if (myMatrix.getCol() != 0) {
		cout << "myMatrix col default != 0" << endl;
	}

	cout << "default col = " << myMatrix.getCol();
	*/

	matrix_t m1(2, 3);
	matrix_t m2(3, 2);

	m1.setValue(0, 0, 2);
	m1.setValue(0, 1, 3);
	m1.setValue(0, 2, -1);
	m1.setValue(1, 0, 5);
	m1.setValue(1, 1, 0);
	m1.setValue(1, 2, 6);

	m2.setValue(0, 0, 7);
	m2.setValue(0, 1, 1);
	m2.setValue(1, 0, 0);
	m2.setValue(1, 1, -3);
	m2.setValue(2, 0, 1);
	m2.setValue(2, 1, 0);

	/*
	cout << "Matrix Value at row 1 col 4" << " = " << myMatrix1.getValue(1, 4) << endl;

	cout << myMatrix1[1] << endl;
	*/

	matrix_t m3;

	//m3 = m1 + m2;

	/*
	cout << "Rows: " << m3.getRow() << endl;
	cout << "Cols: " << m3.getCol() << endl;
	cout << "Sample Val = " << m3.getValue(0, 1) << endl;
	*/

	m3 = m1.multiply(m2);

	m1.setValue(0, 0, 1.01);

	cout << "Expected multiplied matrix: " << endl;
	cout << "{13, -7}" << endl;
	cout << "{41, 5}" << endl;

	cout << endl << "Result: " << endl;
	cout << "{" << m3.getValue(0, 0) << ", " << m3.getValue(0, 1) << "}" << endl;
	cout << "{" << m3.getValue(1, 0) << ", " << m3.getValue(1, 1) << "}" << endl;

	cout << "Matrix: 1" << endl;
	m1.display(cout);
	cout << endl << "Matrix: 2" << endl;
	m2.display(cout);
	cout << endl << "Matrix: 3" << endl;
	m3.display(cout);

	//Sample int displayed this      "        2"
	//Submission site displayed this "        4"
	//Sample double displayed this   "     1.01"
	//Submission site displayed this "     9.14"

	return 0;
}