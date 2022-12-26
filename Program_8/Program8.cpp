/*
  Author: Brendon Newton
  Assignment Title: Program 8
  Assignment Description: This program inputs a, b, and c of a
                          quadratic and outputs the roots and vertex
  Due Date: 9/21/2022
  Date Created: 9/14/2022
  Date Last Modified: 9/14/2022
*/

/*
  Data Abstraction: Input Output stream is opened
                    Input Output manipulation library included
                    Cmath library is included
                    variables a, b, and c are declared to hold
                    input values
                    x and y declared to hold calculation results
                    numRoots declared to hold calculation results

  Input: The program reads in a, b, and c from the user

  Process: Program calculates the value of d
           Program uses the value of d to determine the number of roots
           Program calculates the roots
           Program calculates the values of x and y at the vertex

  Output: The roots, or NO REAL ROOTS, is printed to the screen
          The vertex is printed to the screen

  Assumptions: It is assumed that the user will input the numbers
               correctly
               It is assumed the user doesn't want to know the
               value of the imaginary root, if one exists

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    //Data Abstraction

    double a, b, c, d, x, y;
    double root1, root2;
    int numRoots;

    //Input

    cin >> a >> b >> c;

    //Process

    d = (pow(b, 2)) - (4 * a * c);
    
    numRoots = 0;

    if (d > 0)

    	numRoots = 2;

    else if (d == 0)

    	numRoots = 1;

    root1 = (-b - sqrt(d)) / (2 * a);
    root2 = (-b + sqrt(d)) / (2 * a);

    root1 = (root1 == -0) ? 0 : root1;

    if (-b / (2 * a) == -0)

    	x = 0;

    else

    	x = -b / (2 * a);

    y = (a * pow(x, 2)) + (b * x) + c;

    if (y == -0)

    	y = 0;

    //Output

    cout << fixed << setprecision(2);

    if (numRoots == 0)

    	cout << "NO REAL ROOTS ";

    else if (numRoots != 2)

    	cout << root1 << " ";

    else

    	cout << root1 << " " << root2 << " ";

    cout << "(" << x << ", " << y << ")" << endl;

    return 0;
}