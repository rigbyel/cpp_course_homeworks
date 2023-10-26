#include "rectangle.h"

Rectangle::Rectangle(double a1, double b1, double a2, double b2) :
     left{ a1 < a2 ? a1 : a2 },
     right{ a1 > a2 ? a1 : a2 }, 
     bottom{ b1 < b2 ? b1 : b2 },
     top{ b1 > b2 ? b1 : b2 } {}

double Rectangle::area() {
    return (right - left) * (top - bottom);
}

double Rectangle::perimeter() {
    return 2 * ((right - left) + (top - bottom));
}

double Rectangle::get_right() {
    return right;
}

double Rectangle::get_left() {
    return left;
}

double Rectangle::get_top() {
    return top;
}

double Rectangle::get_bottom() {
    return bottom;
}

bool Rectangle::overlaps(Rectangle other) {
    return (other.get_left() <= right) &(left <= other.get_right()) & (other.get_bottom() <= top) & (bottom <= other.get_top());
}