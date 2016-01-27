#include <iostream>
#include <string>
#include <map>

using namespace std;


typedef bool(*CompareFunctor)(const int&, const int&); // Function pointer type named "AAA"

bool Compare(const int &a,const int &b)    // The actual comparator function matching the CompFunctor signature
{
  return (a > b);
}


using namespace std;
int main() {
  cout << endl << "custom sort works with map as well " << endl;
  map<int,string,CompareFunctor> m(Compare);
  m[1] = "Somchai";
  m[3] = "Nattee";
  m[99] = "Nuttapong";
  m[5] = "Vishnu";
  m[-20] = "XXX";
  for (auto x : m) {
    cout << x.first << ":" << x.second << endl;
  }
}
