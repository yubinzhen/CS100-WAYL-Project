#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        float width;
        float height;
    public:
        void set_width(float w);
        void set_height(float h);
        double area();
};

#endif /* RECTANGLE_HPP */