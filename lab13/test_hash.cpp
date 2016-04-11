#include <iostream>
#include <vector>
#include "unordered_map.h"

using namespace std;

int main() {
  CP::unordered_map<string,int> mm;

  mm["somchai"] = 10;
  mm["nuttapong"] = 20;


  cout << mm["attawith"] << endl;
  cout << mm["somchai"] << endl;
  cout << mm["nuttapong"] << endl;
  cout << mm["athasit"] << endl;
  cout << mm["123"] << endl;
  cout << mm["zzz"] << endl;

  cout << "-------------- done ------------" << endl;
  cout << "attawith = " <<  mm["attawith"] << endl;
  auto xx = mm.insert(make_pair("uuuiuiouou",30));
  cout << "xx.first.first = " << xx.first->first << endl;
  cout << "xx.first.second = " << xx.first->second << endl;
  cout << "xx.second = " << xx.second << endl;


}

