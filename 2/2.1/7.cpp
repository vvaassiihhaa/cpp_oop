#include <iostream>

class TriangleChecker {
    int a, b, c;

public
    int is_triangle() {
    }

};

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    TriangleChecker * ptr_tr = new TriangleChecker( a, b, c );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    delete ptr_tr;

    return 0;
}