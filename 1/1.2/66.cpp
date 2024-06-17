#include <iostream>
#include <cstring>
#define NAME_LENGTH 100

// здесь объявляйте класс
class CartData {
    unsigned long id;
    char name[ NAME_LENGTH ];
    unsigned price;
    double weight;

public:
    void get_data( unsigned long &id, unsigned &price, double &weight ) {
      id     = this->id    ;
      price  = this->price ;
      weight = this->weight;
    }   
  
    char * get_name() {
      return this->name;
    }  

    void set_data( unsigned long id, const char * name, unsigned price, double weight ) {
      this->id = id;
      strcpy( this->name, name );
      this->price = price;
      this->weight = weight;
    }
};

int main( void )
{
    // здесь продолжайте функцию main

    CartData item;
    item.set_data( 10, "Toy", 2000, 5.45 );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}