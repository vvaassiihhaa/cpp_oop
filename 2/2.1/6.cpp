#include <iostream>

class Wallet {

private:
    long volume { 0 };

public:
    Wallet() : volume( 0 )
      {}                      // конструктор 

    Wallet( long v ) : volume( v )
      {}     

    void set_volume(long volume) {
        this->volume = volume;
    }

    long get_volume() {
        return volume;
    }

};

int main(void) {
    
    Wallet wt1( 1000 );
    Wallet wt2;

//    __ASSERT_TESTS__ 
    return 0;
}