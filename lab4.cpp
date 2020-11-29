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

template < typename T >
struct S
{
    void print() { puts("Szablon ogólny"); }
};

template <>
struct S< double >
{
    void print() { puts("Specjalizacja dla double"); }
};

template < typename T >
T iloczyn(T tab[], int n)
{
    T prod = tab[0];
    for (int i = 1; i < n; i++) {
        prod = prod * tab[i];
    }
    // cout << prod << endl;
    return prod;
}

template < typename T >
T sumaPary(Couple< T > para)
{
    return para.sum();
}

int main()
{
    /*Couple Para{10, 15};
    cout << Para.get_a() << endl << Para.get_b() << endl << Para.sum() << endl;

    Couple Para1{10.06, 15.04};
    Couple Para2{101.06, 151.08};
    Couple Para3{110.08, 105.45};

    CoupleTable< double, 4 > tab;
    tab[1] = Para1;
    tab[2] = Para2;
    tab[3] = Para3;

    double suma = 0;

    for (int i = 1; i < 4; i++) {
        suma += tab[i].sum();
    }

    cout << suma << endl;

    S< int > integer;

    integer.print();

    S< double > dbl;

    dbl.print();*/

    int tab[]    = {1, 2, 3};
    int silnia_3 = iloczyn(tab, 3);
    cout << silnia_3 << endl;

    Couple test{2, 3};

    int test1 = sumaPary(test);

    cout << test1 << endl;
}
