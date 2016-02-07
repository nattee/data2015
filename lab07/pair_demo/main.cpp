#include <iostream>
#include "pair.h"

using namespace std;

int main()
{
    CP::pair<int,int> a;
    cout << "a = " << a.first << "," << a.second << endl;
    // do something here that use pair

    a.first = 20;
    CP::pair<int,int> b(a);
    cout << "b = " << b.first << "," << b.second << endl;

    CP::pair<int,int> c(200,-94);
    cout << "c = " << c.first << "," << c.second << endl;

    CP::pair<int,string> d("somchai");
    cout << "d = " << d.first << "," << d.second << endl;

}
