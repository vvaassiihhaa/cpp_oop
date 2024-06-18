#include <iostream>

class Point2D {
    int x, y;

public:
    Point2D() : x(0), y(0) // конструктор объекта
        {}                 // конструктор объекта

    void set_coords(int a, int b) {
        x = a;
        y = b;
    }
    void get_coords(int& a, int& b) {
        a = x;
        b = y;
    }    
};


int main() {

    Point2D pt;
    Point2D *ptr_pt = new Point2D;

    int x, y;

    pt.get_coords( x, y );
    std::cout << x << " " << y << std::endl;

    ptr_pt->get_coords( x, y );
    std::cout << x << " " << y << std::endl;

    delete ptr_pt;
    return 0;    
}