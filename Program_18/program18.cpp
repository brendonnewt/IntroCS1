/*
    Author: Brendon Newton
    Assignment Title: Program 18
    Assignment Description: This program defines functions
                                                    for the Line Class
    Due Date: 11/11/2022
    Date Created: 12/26/2022
    Date Last Modified: 12/28/2022
*/

#include "Line.h"

using namespace std;

Line::Line(Point a, Point b) {
    p1 = a;
    p2 = b;
}

void Line::setFirstPoint(const Point& a) {
    p1 = a;
}

void Line::setSecondPoint(const Point& a) {
    p2 = a;
}

Point Line::getFirstPoint() const {
    return p1;
}

Point Line::getSecondPoint() const {
    return p2;
}

bool Line::hasSlope() const {
    bool slopeResult;
    
    if (p1.x == p2.x) {
        slopeResult = false;
    }
    else {
        slopeResult = true;
    }
    return slopeResult;
}

double Line::slope() const {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

double Line::yIntercept() const {
    return p1.y - (slope() * p1.x);
}

bool Line::isParallel(const Line& otherLine) const {
    return (abs(slope() - otherLine.slope()) < 0.00001);
}

bool Line::isCollinear(const Line& otherLine) const {
    bool areCollinear;

    if (isParallel(otherLine)) {
        if (abs(yIntercept() - otherLine.yIntercept()) < 0.00001) {
            areCollinear = true;
        }
    }
    else {
        areCollinear = false;
    }
    return areCollinear;
}

bool Line::isPerpendicular(const Line& otherLine) const {
    return (abs((-1.0 / slope()) - otherLine.slope()) < 0.00001);
}

Point Line::intersect(const Line& otherLine) const {
    double m1 = slope();
    double b1 = yIntercept();
    double m2 = otherLine.slope();
    double b2 = otherLine.yIntercept();
    double x, y;

    if (hasSlope() && otherLine.hasSlope()) {
        x = (b2 - b1) / (m1 - m2);
        y = (m1 * x) + b1;
    }
    else if (!hasSlope() && otherLine.hasSlope()) {
        x = p1.x;
        y = otherLine.slope() * x + b2;
    }
    else {
        x = otherLine.p1.x;
        y = slope() * x + b1;
    }
    return Point(x, y);
}

void Line::display(ostream& stream) const {
    string leftSideString;
    
    //Determines format if undefined
    if (hasSlope()) {
        leftSideString = "y = ";
    }
    else {
        leftSideString = "x = ";
    }

    stream << leftSideString; 

    //Outputs formatted slope
    if (slope() == 0) {
        stream << p1.y;
    }
    else if (slope() == 1) {
        stream << "x";
    }
    else if (slope() == -1) {
        stream << "-x";
    }
    else if (leftSideString == "x = ") {
        stream << p1.x;
    }
    else {
        stream << slope() << "x";
    }

    //Outputs y-intercept
    if (leftSideString == "x = " || slope() == 0) {
        //No y-intercept
    }
    else if (yIntercept() > 0) {
        stream << " + " << yIntercept();
    }
    else if (yIntercept() < 0) {
        stream << " " << yIntercept();
    }
    else {
        //No output for zero
    }

    stream << endl;
}
