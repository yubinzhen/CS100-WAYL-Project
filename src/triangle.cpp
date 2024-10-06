#include "../header/triangle.hpp"

void Triangle::set_base(float b) {
    this->base = b;
}

void Triangle::set_height(float h) {
    this->height = h;
}

double Triangle::area() {
    return (this->base * this->height)/2;
}