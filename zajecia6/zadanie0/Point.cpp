//
// Created by Piotr Adamczyk on 08/12/2019.
//

#include <cmath>
#include "Point.h"

Point::Point() : Point(0) {

}

Point::Point(double xy) : Point(xy, xy) {
}

Point::Point(double x, double y) {
    this->_x = x;
    this->_y = y;
}

double Point::getX() {
    return _x;
}

double Point::getY() {
    return _y;
}

Point &Point::setX(double x) {
    this->_x = x;
    return *this;
}

Point &Point::setY(double y) {
    this->_y = y;
    return *this;
}

Point &Point::transX(double x) {
    this->_x += x;
    return *this;
}

Point &Point::transY(double y) {
    this->_y += y;
    return *this;
}

Point &Point::transXY(double x, double y) {
    return this->transX(x).transY(y);
}

double Point::dist(Point &a, Point &b) {
    return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}
