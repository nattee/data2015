#include <iostream>
#include <vector>
#include <algorithm>
#include "triplet.h"

using namespace std;

int main() {
  CP::triplet<int,std::string,float> a(10,"vishnu",590.2);
  CP::triplet<int,std::string,float> b(a);

  cout << endl << "using equality operator" << endl;
  cout << "a == b? " << (a == b ? "YES" : "NO")  << endl;

  CP::triplet<int,std::string,float> c(999,"asdf",300.3);

  cout << endl << "using assignment  operator" << endl;
  c = a;
  cout << "a == c? " << (a == c ? "YES" : "NO")  << endl;

  c.third = 42.24;
  cout << "a == c? " << (a == c ? "YES" : "NO")  << endl;

  cout << endl << "using comparison  operator" << endl;
  std::vector<CP::triplet<int,string,float> > v;
  v.push_back( CP::triplet<int,string,float>(10,"asdf",3.4));
  v.push_back( CP::triplet<int,string,float>(10,"ddd",3.4));
  v.push_back( CP::triplet<int,string,float>(5,"asdf",3.4));
  v.push_back( CP::triplet<int,string,float>(5,"asdf",200.4));
  v.push_back( CP::triplet<int,string,float>(3,"X",3.4));
  v.push_back( CP::triplet<int,string,float>(1,"asdf",3.4));
  v.push_back( CP::triplet<int,string,float>(10,"zzz",3.4));

  sort(v.begin(),v.end());

  for (size_t i = 0;i < v.size();i++) {
    cout << v[i].first << " " << v[i].second << " " << v[i].third << endl;
  }
}

