#include <iostream>

class TriangleChecker {
    int a, b, c;

public:
    TriangleChecker(int a, int b, int c) : a(a), b(b), c(c) {}

    // в этот метод ничего передавать не надо, потому что есть поля объекта
    int is_triangle() {
        if ( a <= 0 || b <= 0 || c <= 0 ) return 1;
        if ( a + b <= c || a + c <= b || b + c <= a ) return 2;   
        return 3; 
    }                        // и они уже заполнены
};

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;

    TriangleChecker * ptr_tr = new TriangleChecker( a, b, c );
    std::cout << ptr_tr->is_triangle() << std::endl;

    // __ASSERT_TESTS__ // 

    delete ptr_tr;

    return 0;
}