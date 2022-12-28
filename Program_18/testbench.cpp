#include "Line.h"

using namespace std;

int main() {

	Point myPoint(5, 0);
	Point otherPoint(5, 9);

	Line myLine(myPoint, otherPoint);

	/*
	Point returnPoint1;
	Point returnPoint2;

	returnPoint1 = myLine.getFirstPoint();
	returnPoint2 = myLine.getSecondPoint();

	double x1 = returnPoint1.x;
	double y1 = returnPoint1.y;

	double x2 = returnPoint2.x;
	double y2 = returnPoint2.y;

	cout << "Line first point is (" << x1 << ", " << y1 << ")" << endl;
	cout << "Line second point is (" << x2 << ", " << y2 << ")" << endl;

	//cout << myLine.hasSlope() << endl;

	cout << "Line slope = " << myLine.slope() << endl;

	cout << "Y-Intercept = " << myLine.yIntercept() << endl;

	Point myPoint2(2, 4);
	Point otherPoint2(4, 10);

	Line otherLine(myPoint2, otherPoint2);

	cout << myLine.isParallel(otherLine) << endl;

	myLine.display(cout);
	otherLine.display(cout);
	*/

	myLine.display(cout);

	return 0;
}