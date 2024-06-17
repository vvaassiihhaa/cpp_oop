#include <iostream>
#include <string>
using namespace std;

class Notes {

private:
    string title; 
    string author;
    int pages;

public:

void set_data(const string& title, const string& author, int pages) {
    this->title = title;
    this->author = author;
    this->pages = pages;
} 

void set_data(const Notes& note) {
    title = note.title;
    author = note.author;
    pages = note.pages;
}

const string& get_title() {
    return title;
}

const string& get_author() {
    return author;
}

int get_pages() {
    return pages;
} 

};


int main(void) {
    
    Notes * ptr_note1 = new Notes();
    ptr_note1->set_data( "Фантазия экспромт", "Ф. Шопен", 5 );

    Notes * ptr_note2 = new Notes();
    ptr_note2->set_data( *ptr_note1 );

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0 или перед освобождением памяти)

    delete ptr_note1, ptr_note2;

    return 0;
}