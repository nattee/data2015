#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  for (int i = 0;i < 10;i++)
    v.push_back(i*10);


  //declare an iterator
  vector<int>::iterator it = v.begin();

  cout << endl << "access the item pointed by the iterator" << endl;
  cout << *it << endl;

  cout << endl << "move it around, pointing to other items" << endl;
  it++;
  cout << *it << endl;

  it = it + 5;
  cout << *it << endl;

  cout << endl << "write access" << endl;
  *it = 0;

  cout << endl << "we can compare it to see if it point to the same data" << endl;
  vector<int>::iterator it2 = v.begin();
  cout << *it << endl;
  cout << *it2 << endl;
  cout << (it == it2 ? "true" : "false") << endl;
  cout << (*it == *it2 ? "true" : "false") << endl;


  cout << endl << ".end() points to the position *after* the last items" << endl;
  //also notice the short-hand syntax
  auto it3 = v.end();
  cout << *it3 << endl; // this is VERY DANGEROUS!!!! can cause illegal operation in more complex program because there is nothing at end()
  it3--;// this is perfectly legal
  cout << *it3 << endl; 

  cout << endl << "iterates over all items" << endl;
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;

  }

  cout << endl << "for loop that use iterator" << endl;
  for(auto x : v)
    cout << x << endl;
}

