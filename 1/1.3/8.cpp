#include <iostream>
#include <string>
using namespace std;

// здесь объявляйте класс
class TravelBlog {

private:
    string country; 
    short days; 

public:

    void set_info(const string &country, short days) {
        this->country = country; 
        this->days = days;  
    }
    
    void set_info(const TravelBlog& blog) {
        country = blog.country;
        days = blog.days;
    }
    
    const string& get_country() {
        return country;
    }

    short get_days() {
        return days;
    }

};


int main(void)
{
    TravelBlog blog1, blog2;
    blog1.set_info( "ОАЭ", 10 );
    blog2.set_info( blog1 );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}