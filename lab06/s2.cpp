#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;
 
int main()
{
   int n;
   n = 1000000;
   vector<int> a;
   stack<int> s;
   for(int i = 0;i<n;i++){
    a.push_back(i);
   }
   for(int i = 0;i<n;i++){
        s.push(a.back());
        a.pop_back();
   }
 
   for(int i = 0;i<n;i++){
        a.insert(a.begin(),s.top());
        s.pop();
   }
 
 
 
   return 0;
 
 
 
}
