#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n,d;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin>>d;
        a.push_back(d);
    }
 
    for(int i=0; i<n/2; i++){
        int t = *(a.begin()+i);
        *(a.begin()+i) = *(a.begin()+n-i-1);
        *(a.begin()+n-i-1) = t;
    }
 
    for(auto x : a){
        cout<<x<<endl;
    }
    return 0;
}
