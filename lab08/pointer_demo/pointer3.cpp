#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
  int *mData;
  mData = new int[100];
  

  int *ptr;

  ptr = mData;

  *ptr = 200;
  cout << *mData << endl;

  ptr = ptr + 3;
  *ptr = 10;

  for (int i  = 0;i < 10;i++) {
    cout << i << ": " << mData[3] << endl;

  }
  return 0;

  cout << endl << "mData is a pointer" << endl;
  cout << mData << endl;


  cout << endl << "mData[x] is the value at the address x slots after mData" << endl;
  cout << mData[0] << endl;
  cout << mData[1]<< endl;
  cout << mData[2]<< endl;
  cout << mData[3]<< endl;
  cout << mData[4]<< endl;
}
