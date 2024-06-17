#include <iostream>
#include <string>

// здесь объявляйте класс
class Goods {
public:

    std::string name;  // название
    double weight;     // вес
    int price;         // цена

    const std::string& get_name() {
    } // возвращает ссылку на поле name

    double get_weight() {
        return this->weight;
    } // возвращает значение поля weight

    int get_price() {
        return this->price;
    } // возвращает значение поля price

};

int main( void ) {
    // здесь продолжайте функцию main

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}