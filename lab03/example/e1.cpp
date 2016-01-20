#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    cout<<"Please Enter "<<n<<" integer"<<endl;
    vector<int> a,b;
    for(int i=0; i<n; i++)
    {
        cin>>d;
        a.push_back(d);
    }
    while(!a.empty())
    {
        b.push_back(a.back());
        a.pop_back();
    }

    for (size_t i = 0;i < b.size();i++) {
      cout << b[i] << endl;
    }
    return 0;
}
