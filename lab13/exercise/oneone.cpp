#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;

  cin >> n;
  v.resize(n);
  for (int i = 0;i < n;i++) {
    cin >> v[i]; // guarantee 0 ... n-1
  }

  //print "YES" only when v[i] is 1-1 and onto on set {0..n-1}
  //print "NO" otherwise
}

