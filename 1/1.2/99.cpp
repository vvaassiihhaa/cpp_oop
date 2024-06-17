#include <iostream>
#include <stdio.h>

// здесь объявляйте класс
class Clock {
    unsigned time_current;
public:
    unsigned get_hours() {
        return time_current / 3600;
    } 

    unsigned get_minutes() { 
        unsigned hours = time_current / 3600;
        unsigned minutes = ( time_current - hours * 3600 ) / 60; 
        return minutes;
    } 

    // это проще -> return time_current % 3600 / 60;

    unsigned get_seconds() {
        return this->time_current % 60;
    } 

    void set_time( unsigned tm ) {
        time_current = tm; // this->time_current
    } 
};

int main(void)
{
    // здесь продолжайте функцию main
    Clock * ptr_cl = new Clock();

    unsigned tm;
    std::cin >> tm;
    ptr_cl->set_time( tm );

    unsigned h = ptr_cl->get_hours();
    unsigned m = ptr_cl->get_minutes();
    unsigned s = ptr_cl->get_seconds();

    printf( "%02d:%02d:%02d:", h, m, s );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    delete ptr_cl;

    return 0;
}