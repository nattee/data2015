#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    cout<<"Please Enter "<<n<<" integer"<<endl;
    vector<int> a;
    for(int i=0; i<n; i++) { cin>>d; a.push_back(d); }

    for (size_t i = 0;i < a.size();i++) { cout << a[i] << endl; }

    int x;
    cout<<"Please Enter value to search: ";
    cin >> x;

    //search if a contains x
    //print "YES" if found, "NO" otherwise
    return 0;
}
