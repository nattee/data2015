#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,d;
    cout << "Enter number of values:";
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
    auto found = false;
    // Example 1: everyone should be able to write this
    for (int i = 0;i < a.size();i++) {
      if (a[i] == x) { found = true; break; }
    }


    //example 2: using iterator instead of index, this is prefered method
    for (auto it = a.begin();it != a.end(); it++) {
      if (*it == x) {found = true; break;}

    }

    //example 3: use range-based for loop
    //this is only available only when a supports iterator
    for (auto value : a) {
      if (value == x) {found = true; break;}
    }

    //Last Example, using the building "find" function
    if (find(a.begin(),a.begin()+3,x) != a.begin()+3) found = true;

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}
