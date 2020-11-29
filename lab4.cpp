#include <iostream>
using namespace std;

template < typename T >
class Couple
{
public:
    Couple() {}
    Couple(T an, T bn) : a{an}, b{bn} {}

    void set_a(T param) { a = param; }
    void set_b(T param) { b = param; }
    T    get_a() { return a; }
    T    get_b() { return b; }
    T    sum() { return a + b; }

private:
    T a;
    T b;
};

template < typename T, unsigned int N >

class CoupleTable
{
public:
    Couple< T >  table[N];
    Couple< T >& operator[](int n) { return table[n]; }
};

int main()
{
    Couple Para{10, 15};
    cout << Para.get_a() << endl << Para.get_b() << endl << Para.sum() << endl;

    Couple Para0{10, 15};
    Couple Para1{101, 151};
    Couple Para2{110, 105};

    CoupleTable< int, 3 > tab;
    tab[0] = Para0;
    tab[1] = Para1;
    tab[2] = Para2;
}
