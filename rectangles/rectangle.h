#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <vector>

class Rectangle 
{
private:
    double left, right, bottom, top;
public:
    Rectangle(double a1, double b1, double a2, double b2);
    double area();
    double perimeter();
    double get_right();
    double get_left();
    double get_top();
    double get_bottom();
    bool overlaps(Rectangle other);
    bool has_point(std::vector<int> point);
};

#endif