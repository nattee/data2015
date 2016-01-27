#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{

//    pair<int,int> p1 = make_pair(100,100);
//    pair<int,int> p2 = make_pair(100,10000);
//    if (p1 < p2) cout << "YES" << endl;


  set< vector<int> > a;
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(1);
  v1.push_back(1);
  vector<int> v2;
  v2.push_back(2);
  v2.push_back(2);
  v2.push_back(2);

  a.insert(v1);
  a.insert(v2);

  for (auto x : a) {
    cout << x << endl;

  }

}
