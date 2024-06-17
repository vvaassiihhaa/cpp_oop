#include <iostream>

// здесь объявляйте класс
class Vector3D {
    int x, y, z;
public:
    void get_coords(int& x, int& y, int& z) {
      x = this->x; 
      y = this->y; 
      z = this->z; 
    } // возвращает (через ссылки) значения координат

    void set_coords(int a, int b, int c) {
      if ( a >= -100 && a <= 100 && b >= -100 && b <= 100 && c >= -100 && c <= 100 ) { 
        this->x = a;
        this->y = b;
        this->z = c;
      }
    } // заносит в поля x, y, z значения a, b, c
};

int main(void)
{
    // здесь продолжайте функцию main
    Vector3D *ptr_v1 = new Vector3D();
    Vector3D *ptr_v2 = new Vector3D();
    ptr_v1->set_coords( 10, -5,   7 );
    ptr_v2->set_coords( 0 , 12, -56 );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память
    delete ptr_v1;
    delete ptr_v2;

    return 0;
}