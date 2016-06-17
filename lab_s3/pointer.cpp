#include <iostream>
#include <vector>

using namespace std;

void aaa(int *&x) {
  int yyyy;
  x = &yyyy;
  *x = 30;
}

int main() {
  short int x,y,z;
  short int *p1, *p2, *p3;

  x = 1;
  y = 2;

  p1 = &x;
  p2 = &y;

  p3 = p2;

  x = 10;
  *p3 = *p2;
  *p2 = 5;
  z = *p3;

  p3 = &z;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;

  cout << "p1 = " << p1 << endl;
  cout << "p2 = " << p2 << endl;
  cout << "p3 = " << p3 << endl;

  cout << "p1[1] = " << p1[2] << endl;
  cout << "p2[1] = " << p2[1] << endl;
  cout << "p3[1] = " << p3[1] << endl;

}

