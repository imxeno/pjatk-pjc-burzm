//
// Created by Piotr Adamczyk on 08/12/2019.
//

#ifndef PJATK_PJC_BURZM_POINT_H
#define PJATK_PJC_BURZM_POINT_H


class Point {
public:
    explicit Point();
    explicit Point(double xy);
    explicit Point(double x, double y);

    double getX();
    double getY();
    Point &setX(double x);
    Point &setY(double y);
    Point &transX(double x);
    Point &transY(double y);
    Point &transXY(double x, double y);

    static double dist(Point &a, Point &b);
private:
    double _x;
    double _y;
};


#endif //PJATK_PJC_BURZM_POINT_H
