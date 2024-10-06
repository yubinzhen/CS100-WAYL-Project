#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle {
    private:
        float base;
        float height;
    public:
        void set_base(float b);
        void set_height(float h);
        double area();
};

#endif /* TRIANGLE_HPP */