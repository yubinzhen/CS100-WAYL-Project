#include "../header/rectangle.hpp"

void Rectangle::set_width(float w) {
    this->width = w;
}

void Rectangle::set_height(float h) {
    this->height = h;
}

double Rectangle::area() {
    return this->width * this->height;
}