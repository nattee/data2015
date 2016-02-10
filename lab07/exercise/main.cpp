#include <iostream>
#include "pair.h"

using namespace std;

int main()
{
    cout << endl << "using default constructor" << endl;
    CP::pair<int,int> a;
    cout << "by default, a = " << a.first << "," << a.second << endl;
    a.first = 1; a.second = 2;
    cout << "now a = " << a.first << "," << a.second << endl;

    cout << endl << "using copy constructor" << endl;
    CP::pair<int,int> b(a);
    cout << "b is copied from a\nb = " << b.first << "," << b.second << endl;

    cout << endl << "using custom constructor" << endl;
    CP::pair<int,int> c(200,-94);
    cout << "c = " << c.first << "," << c.second << endl;

    cout << endl << "using another custom constructor" << endl;
    CP::pair<int,string> d("somchai");
    cout << "d = " << d.first << "," << d.second << endl;

}
