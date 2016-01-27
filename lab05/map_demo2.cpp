#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  map<int,pair<float,float> > m; // create a map with more complex mapped type

  //add a lots of members
  int n = 100000;
  for (int i = 0;i < n;i++) {
    m[rand() % (n*100)] = make_pair( rand() / (RAND_MAX + 1.0),rand() / (RAND_MAX + 1.0));
  }

  //map can find very fast
  int k = 10000;
  for (int i = 0;i < k;i++) {
    auto it = m.find(rand() % (n*100));
    if (it != m.end()) {
      // this is another syntax short cut, instead of (*it).xxxx , we can do it->xxxx
      cout << "Found " << it->first << ": (" << it->second.first << "," << it->second.second << ")" << endl;
    }
  }

}

