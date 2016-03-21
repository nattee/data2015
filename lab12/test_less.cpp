#include <iostream>
#include <vector>

using namespace std;
std::less<int>  xx;

typedef bool(*AAA)(const int&, const int&);
AAA y;

bool Compare(const int &a,const int &b)    // The actual comparator function matching the CompFunctor signature
{
  return (a > b);
}


bool CompareAndTalk(const int &a,const int &b)    // The actual comparator function matching the CompFunctor signature
{
  cout << "asdfasdf " << endl;
  return (a > b);
}


int main() {
  int a,b;
  a = 20;
  b = 20;
  xx(a,b);
  y =  Compare;

  if (y(a,b)) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;

  }

  y = CompareAndTalk;

  if (y(a,b)) {
    cout << "TRUE" << endl;
  } else {
    cout << "FALSE" << endl;

  }

}

