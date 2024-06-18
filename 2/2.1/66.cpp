class Wallet {
    long volume = 0; // private ( по-умолчанию )

    public:
        Wallet( long v = 0 ) : volume( v ) {} // конструктор

        void set_volume( long v ) { volume = v; }

        long get_volume() { return volume; }
};

int main() {
    Wallet wt1( 1000 );
    Wallet wt2;

    // __ASSERT_TESTS__ 
        
    return 0;
}