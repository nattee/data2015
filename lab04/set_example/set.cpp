#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    n = 100000;
    vector<int> a;
    for(int i=0; i<n; i++) { a.push_back(i * 10); }

    auto found = false;
    int x;
    for (int i = 0;i < 100000;i++) {
      x = rand();
      if (find(a.begin(),a.end(),x) != a.end()) found = true;
    }

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}
