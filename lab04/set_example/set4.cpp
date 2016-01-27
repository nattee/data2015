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


    set< pair<int,int> > a;
    a.insert( make_pair( 10, 20) );
    a.insert( make_pair(100, 20) );
    a.insert( make_pair( 10, 22) );
    a.insert( make_pair( 33, 44) );
    
    for (auto x : a) {
      cout << x.first << "," << x.second << endl;
  }



    return 0;
}
