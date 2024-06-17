#include <iostream>
#include <iomanip> // Для установки формата вывода

// здесь объявляйте класс
class Clock {
    unsigned time_current;
public:
    unsigned get_hours() {
        return this->time_current / 3600;
    } // возвращает количество часов в time_current

    unsigned get_minutes() { 
        unsigned hours = this->time_current / 3600;
        unsigned minutes = ( this->time_current - hours * 3600 ) / 60; 
        return minutes;
    } // возвращает количество минут в time_current (за вычетом часов)

    unsigned get_seconds() {
        return this->time_current % 60;
    } // возвращает количество секунд в time_current (за вычетом часов и минут)    

    void set_time( unsigned tm ) {
        this->time_current = tm; 
    } // заносит в поле time_current значение tm
};

int main(void)
{
    // здесь продолжайте функцию main
    Clock * ptr_cl = new Clock();

    unsigned tm;
    std::cin >> tm;
    ptr_cl->set_time( tm );

    unsigned hours = ptr_cl->get_hours();
    unsigned minutes = ptr_cl->get_minutes();
    unsigned seconds = ptr_cl->get_seconds();

    // Вывод времени в формате hh:mm:ss
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setfill('0') << std::setw(2) << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::endl;    

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    // здесь освобождайте память
    delete ptr_cl;

    return 0;
}