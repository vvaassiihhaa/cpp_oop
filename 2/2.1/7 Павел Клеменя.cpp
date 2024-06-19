#include <iostream>

class TriangleChecker{
private:
    int a{0}, b{0}, c{0};
public:
    TriangleChecker(int a = 0, int b = 0, int c = 0)  : a(a), b(b), c(c)
        {}
    int is_triangle();
};

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    TriangleChecker* ptr_tr = new TriangleChecker(a, b, c);

    std::cout << ptr_tr->is_triangle() << std::endl;

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    delete ptr_tr;

    return 0;
}

int TriangleChecker::is_triangle(){
    if(a <= 0 or b <= 0 or c <= 0) return 1;
    if( (a + b <= c) or (b + c <= a) or (c + a <= b)) return 2;
    return 3;
}