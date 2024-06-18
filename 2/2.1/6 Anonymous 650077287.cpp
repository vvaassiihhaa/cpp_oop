#include <iostream>
#include <string>

using std::string;

struct Wallet
{
private:
    long volume;

public:
    Wallet() :volume(0)
    {

    }

    explicit Wallet(long copyVolume) : volume(copyVolume)
    {

    }

    void set_volume(long volume)
    {
        this->volume = volume;
    }

    long get_volume()
    {
        return volume;
    }
};

int main()
{
    Wallet wt1 {1000};
    Wallet wt2 {};
    __ASSERT_TESTS__

    return 0;
}