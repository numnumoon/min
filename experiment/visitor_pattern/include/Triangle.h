#pragma once

#include "Point.h"
#include "Shape.h"

class Triangle : public Shape{
public:
    explicit Triangle(double side)
        : Shape(triangle), side_(side){}
    double side() const {return side_;}
    Point center() const {return center_;}

private:
    double side_;
    Point center_{};
};