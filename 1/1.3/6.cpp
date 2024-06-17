#include <iostream>
#include <string>

class Goods {
public:

    std::string name;  // название
    double weight;     // вес
    int price;         // цена

    const std::string& get_name() {
        return this->name;
    } // возвращает ссылку на поле name

    double get_weight() {
        return this->weight;
    } // возвращает значение поля weight

    int get_price() {
        return this->price;
    } // возвращает значение поля price

};

int main( void ) {

    Goods book, toy;

    book.name = "Основы ООП";
    book.weight = 234.5;
    book.price = 2000;

    toy.name = "Oculus Quest 3";
    toy.weight = 204.6;
    toy.price = 80000;

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}