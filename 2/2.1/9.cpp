#include <iostream>

struct Point { short x, y; };

class PolyLine {
    enum { max_coords = 10 };
    Point coords[ max_coords ];
    int total { 0 };
public:
    PolyLine() : total( 0 ) {}
    PolyLine( const Point* ar, int size ) {
      set_coords( ar, size );
    }

    void set_coords( const Point* ar, int size); 
    void append_coord( Point pt ); 
    const Point* get_coords(); 
    int get_total(); 

};

int main() {

    Point coords[20];
    for( int i = 0; i < 20; ++i ) {
        coords[i].x = i + 1;
        coords[i].y = i + 2;
    }

    PolyLine poly( coords, 20 );
    PolyLine pl;
    pl.append_coord( coords[19] );

    // __ASSERT_TESTS__ 

    return 0;
}

void PolyLine::append_coord( Point pt ) {
  if ( total == max_coords ) return;
  coords[ total ] = pt;
  total++;
}

void PolyLine::set_coords(const Point* ar, int size) {
  if ( size > max_coords ) size = max_coords;
  for ( int i = 0; i < size; ++i ) coords[ i ] = ar[ i ]; 
  total = size;
}

const Point* PolyLine::get_coords() {
    return coords;    
}
int PolyLine::get_total() { return total; }