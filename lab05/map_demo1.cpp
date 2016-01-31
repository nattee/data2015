#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  map<int,int> m; // create a map with int Key and int Mapped

  //add
  cout << "add data into a map" << endl;
  m[1] = 20;
  m[42] = -99;
  m[-3] = 5;
  m[m[1]] = 200;
  cout << "Now we have " << m.size() << " elements" << endl;

  cout << endl << "show some mapping" << endl;
  cout << 1 << " is mapped with " << m[1] << endl;
  cout << -3 << " is mapped with " << m[-3] << endl;

  cout << endl << "if we called m[x] where x is not available before, it will be created with default value for mapped" << endl;
  cout << -100 << " is mapped with " << m[-100] << endl;

  cout << endl << "Map cannot contain multiple key of same value, if we try to do one, it will replace the original key" << endl;
  cout << "Now we have " << m.size() << " elements where -3 is mapped with " << m[-3] << endl;
  m[-3] = 21;
  cout << "Now we still have " << m.size() << " elements where -3 is mapped with " << m[-3] << endl;

  cout << endl << "Iterator of map points to a \"pair<Key,Mapped>\"" << endl;
  cout << (*m.begin()).first << ":" << (*m.begin()).second << endl;
  auto it = m.end();
  it--;
  cout << (*it).first << ":" << (*it).second << endl;

  cout << endl << "map is sorted by \"Key\"" << endl;
  for (auto it = m.begin();it != m.end();it++) {
    cout << (*it).first << endl;
  }

  cout << endl << "Erase can be done by giving key" << endl;
  auto count = m.erase(42);
  cout << "We have erase " << count << " element." << endl;
  for (auto x : m) {
    cout << x.first << ":" << x.second << endl;
  }
  count = m.erase(999999999);
  cout << "We have erase " << count << " element." << endl;



  cout << endl << "Insert must provide both the Key and Mapped, using pair" << endl;
  m.insert(make_pair(-100,200));
  for (auto x : m) {
    cout << x.first << ":" << x.second << endl;
  }
}

