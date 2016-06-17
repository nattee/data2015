#include <iostream>
#include <vector>

using namespace std;


int main() {

  int *p1;
  //p1 =&x;
  p1 = new int[10];
  for (int i = 0;i < 10;i++) {
    p1[i] = i*10;
  }

  int *ptr;

  ptr = p1;
  ptr = ptr + 5;
  cout << *ptr << endl;

  cout << ptr - p1 << endl;

  cout << ptr << endl;
  cout << p1 << endl;


}


