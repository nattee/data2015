#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int n;
    n = 10;
    set<int> a;
    for(int i=0; i<n; i++) { 
      cout << "----------- At round " << i << " -------------- " << endl;
      a.insert( rand() );
      for (auto it = a.begin(); it != a.end();it++) {
        cout << *it << endl;
      }
    }

    auto it = a.begin();
    it++;
    it++;
    it++;
    it++;

    cout << *it << endl;



    return 0;
}
