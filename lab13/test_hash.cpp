#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  map<string,int> mm;

  mm["somchai"] = 10;
  mm["nuttapong"] = 20;


  cout << mm["attawit"] << endl;
  cout << mm["somchai"] << endl;
  cout << mm["nuttapong"] << endl;
  cout << mm["athasit"] << endl;
  cout << mm["123"] << endl;
  cout << mm["zzz"] << endl;

  auto it = mm.begin();
  cout << it->first << endl; it++;
  cout << it->first << endl; it++;
  cout << it->first << endl; it++;
  cout << it->first << endl; it++;
  cout << it->first << endl; it++;

}

