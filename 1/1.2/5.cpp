#include <string>

class Cat {
    std::string name; // имя кота
    char old; // возраст (число)
    int color; // цвет
public:
    void set_data(const std::string& name, char old, int color)
    {
        this->name = name;
        this->old = old;
        this->color = color;
    }
};

int main()
{
    Cat cat;
    cat.set_data("Murzik", 4, 255);
    Cat::set_data("Dragon", 7, 0);

    return 0;
}

// при компиляции программы возникнет ошибка, т.к. вызывать метод set_data напрямую из класса нельзя
