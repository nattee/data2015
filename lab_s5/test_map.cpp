#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<int,int> m;
  int n = 5e6;
  cout << "start" << endl;
  for (int i = 0;i < n;i++) {
    m[i] = i;
  }
  cout << "end" << endl;

  auto it = m.begin();
  for (int i = 0;i < 10;i++) {
    cout << it->first << ":" << it->second << endl;
    it++;
  }
}

