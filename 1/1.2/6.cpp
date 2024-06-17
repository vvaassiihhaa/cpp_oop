#include <iostream>

// здесь объявляйте класс
class CartData {
  unsigned long id;
  char name[100];
  unsigned price;
  double weight;

  public:
    void get_data(unsigned long &id, unsigned &price, double &weight);
    char* get_name();
    void set_data(unsigned long id, const char* name, unsigned price, double weight); 

};

int main(void)
{
    // здесь продолжайте функцию main
    CartData item;
    item.id = 10; 
    item.name = "Toy";
    item.price = 2000;
    itrm.weight = 5.45;

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}



# Далее в подвигах все классы следует объявлять с помощью ключевого слова class, если не будет явно указано другое.