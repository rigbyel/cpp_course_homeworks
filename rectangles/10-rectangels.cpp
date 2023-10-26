#include <iostream>
#include "rectangle.h"
#include <vector>
#include <fstream>

int main() {
    std::vector<std::vector<double>> points;

    std::ifstream in("points.txt");
    if (in.is_open())
    {
        double x, y;
        while (in >> x >> y)
        {   
            points.push_back({x, y});
        }
    }
    in.close();

    Rectangle rect1(points[0][0], points[0][1],points[1][0], points[1][1]);
    Rectangle rect2(points[2][0], points[2][1],points[3][0], points[3][1]);

    std::cout << rect1.overlaps(rect2);
    std::cout << rect2.overlaps(rect1);
}