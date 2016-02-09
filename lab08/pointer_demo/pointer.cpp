#include <iostream>

using namespace std;

void test(int &T) {

}

int main() {

  int x,y,z;
  x = 10; y = 1; z = 2;

  //int *x means that x is the pointer of int
  int *px,*py,*pz;

  //&x in expression is the `address` of the variable
  px = &x; py = &y; pz = &z;

  //we can get the value where px points to by *px
  cout << "x   = " << x << endl;
  cout << "*px = " << *px << endl;
  cout << "&x  = " << &x << endl;
  cout << "px  = " << px << endl;


  cout << endl << "before" << endl;
  cout << "x: address = " << px << " value = " << x << endl;
  cout << "y: address = " << py << " value = " << y << endl;
  cout << "z: address = " << pz << " value = " << z << endl;


  py++;
  *py = 100;
  cout << endl << "afer" << endl;
  cout << "x: address = " << px << " value = " << x << endl;
  cout << "y: address = " << py << " value = " << y << endl;
  cout << "z: address = " << pz << " value = " << z << endl;
}
