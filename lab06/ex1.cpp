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
 
    //use Stack to Reverse value in array
 
    for(auto x : a){
        cout<<x<<endl;
    }
    return 0;
}

