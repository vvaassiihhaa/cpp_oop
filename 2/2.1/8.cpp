#include <iostream>
#include <stdio.h>

struct Point {
    short x, y;
};

class Line {
    short x0, y0, x1, y1;
public :
    Line ( short a = 0, short b = 0, short c = 0, short d = 0 ) :
      x0 ( a ), y0 ( b ), x1 ( c ), y1 ( d ) {}   

    Line( Point sp, Point ep ) :
      x0 ( sp.x ), y0 ( sp.y ), x1 ( ep.x ), y1 ( ep.y ) {}   

    Point get_end() {
      Point p;
      p.x = x1;
      p.y = y1;
      return p;
    }

    Point get_start() {
      Point p;
      p.x = x0;
      p.y = y0;
      return p;
    }

    void set_coords( short a, short b, short c, short d ) {
      x0 = a; y0 = b; x1 = c; y1 = d;
    }

    void set_coords( Point sp, Point ep ) {
      x0 = sp.x; y0 = sp.y; x1 = ep.x; y1 = ep.y;
    }
    
};

int main(void) {
    Point sp, ep;
    short a, b, c, d;

    std::cin >> a >> b >> c >> d;
    std::cin >> sp.x >> sp.y >> ep.x >> ep.y;

    auto * ptr_ln1 = new Line( a, b, c, d );
    auto * ptr_ln2 = new Line( sp, ep );

    Point ln1; 
    ln1 = ptr_ln1->get_start();
    printf( "%hd %hd ", ln1.x, ln1.y );

    ln1 = ptr_ln1->get_end();
    printf( "%hd %hd ", ln1.x, ln1.y );

    printf( "%hd %hd ", sp.x, sp.y );
    printf( "%hd %hd\n", ep.x, ep.y );

    __ASSERT_TESTS__ 

    delete ptr_ln1, ptr_ln2;

    return 0;
}

