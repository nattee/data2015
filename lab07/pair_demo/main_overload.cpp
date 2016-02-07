#include <iostream>
#include <vector>
#include <algorithm>
#include "pair.h"

using namespace std;

int main() {
  CP::pair<int,std::string> a(10,"vishnu");
  CP::pair<int,std::string> b(a);

  cout << endl << "using equality operator" << endl;
  cout << "a == b? " << (a == b ? "YES" : "NO")  << endl;

  CP::pair<int,std::string> c(999,"asdf");

  cout << endl << "using assignment  operator" << endl;
  c = a;
  cout << "a == c? " << (a == c ? "YES" : "NO")  << endl;

  c.second = "abc";
  cout << "a == c? " << (a == c ? "YES" : "NO")  << endl;

  cout << endl << "using comparison  operator" << endl;
  std::vector<CP::pair<int,string> > v;
  v.push_back( CP::pair<int,string>(10,"asdf"));
  v.push_back( CP::pair<int,string>(10,"ddd"));
  v.push_back( CP::pair<int,string>(5,"asdf"));
  v.push_back( CP::pair<int,string>(3,"X"));
  v.push_back( CP::pair<int,string>(1,"asdf"));
  v.push_back( CP::pair<int,string>(10,"zzz"));

  sort(v.begin(),v.end());

  for (size_t i = 0;i < v.size();i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }
}

