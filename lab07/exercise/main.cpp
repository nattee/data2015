#include <iostream>
#include "triplet.h"

using namespace std;

int main()
{
    cout << endl << "using default constructor" << endl;
    CP::triplet<int,int,int> a;
    cout << "by default, a = " << a.first << "," << a.second << "," << a.third << endl;
    a.first = 1; a.second = 2; a.third = 10;
    cout << "now, a = " << a.first << "," << a.second << "," << a.third << endl;

    cout << endl << "using copy constructor" << endl;
    CP::triplet<int,int,int> b(a);
    cout << "b is copied from a\nb = " << b.first << "," << b.second << "," << b.third << endl;

    cout << endl << "using custom constructor" << endl;
    CP::triplet<int,int> c(200,-94,200);
    cout << "c = " << c.first << "," << c.second << "," << c.third << endl;

    cout << endl << "using another custom constructor" << endl;
    CP::triplet<int,string,float> d("somchai");
    cout << "d = " << d.first << "," << d.second << e"," << d.third << ndl;

}
