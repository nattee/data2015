#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
  int n;
  n = 1000000;
  vector<int> a;
  for(int i =0; i < n; i++){
    a.push_back(i);
  }

  stack<int> s;
  for(auto it = a.begin(); it!= a.end(); it++){
    s.push(*it);
  }

  for(auto it = a.begin(); it != a.end(); it++){
    *it = s.top();
    s.pop();
//    a.erase(it);
//    a.insert(it, s.top());
//    s.pop();
  }

  return 0;
}
