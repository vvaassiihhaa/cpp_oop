#include <iostream>
using namespace std;

class Wallet {
private:
    long volume = 0;

public:
    Wallet(long volume = 0)
        : volume(volume) { }

    void set_volume(long volume) {
        this->volume = volume;
    }

    long get_volume() {
        return volume;
    }
};

int main(void) {
    Wallet wt1(1000), wt2;

    __ASSERT_TESTS__
        
    return 0;
}