#include <iostream>

class Vector {
    int x, y;
public:
    Vector() : x(0), y(0)
        { }
};

int main()
{
    Vector v;
    std::cout << v.x << " " << v.y << std::endl;

    return 0;
}