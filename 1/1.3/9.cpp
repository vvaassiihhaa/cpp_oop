#include <iostream>
#include <string>
using namespace std;


// здесь объявляйте структуру
struct Person {

    string fio;
    string job;
    unsigned char old;

public:
    
    void set_person_data(const string &fio, const string &job, unsigned char old) {
        this->fio = fio;
        this->job = job;
        this->old = old;
    }

    void set_person_data(const Person& p) {
        fio = p.fio;
        job = p.job;
        old = p.old;        
    }

    void get_data( string &fio, string &job, unsigned char& old) {
        fio = this->fio;
        job = this->job;
        old = this->old;
    }

};

int main(void)
{
    Person p1, p2;
    p1.set_person_data( "С.М. Балакирев", "Просветитель", 84 );
    p2.set_person_data( p1 );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)
    return 0;
}