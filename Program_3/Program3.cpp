/*
Author: Brendon Newton
Assignment Title: Complex Numbers
Assignment Description: displays the results of adding, 
                        subtracting, multiplying, and 
                        dividing two imaginary numbers
Due Date: 8/31/2022
Date Created: 8/29/2022
Date Last Modified: 8/29/2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a;
    double b;
    double c;
    double d;
    double a1;
    double b1;
    double a2;
    double b2;
    double a3;
    double b3;
    double a4;
    double b4;

    a = 1.2;
    b = -3;
    c = -5.7;
    d = 6.3;

    a1 = a + c;
    b1 = b + d;
    a2 = a - c;
    b2 = b - d;
    a3 = (a * c) - (b * d);
    b3 = (a * d) + (b * c);
    a4 = ((a * c) + (b * d)) / ((c * c) + (d * d));
    b4 = ((b * c) - (a * d)) / ((c * c) + (d * d));

    cout << fixed << setprecision(1) << endl;

    cout << "n1 + n2 = " << a1 << " + " << b1 << "i" << endl;
    cout << "n1 - n2 = " << a2 << " + " << b2 << "i" << endl;
    cout << "n1 * n2 = " << a3 << " + " << b3 << "i" << endl;
    cout << "n1 / n2 = " << a4 << " + " << b4 << "i" << endl;

    return 0;
}