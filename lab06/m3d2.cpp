#include <iostream>
#include <map>
#include <queue>
#include <cassert>
using namespace std;

void showSolution(int target, map<int,int>& prev) {
  int v = target;
  string out = "";
  while(prev[v] != - 1) {
    out = (prev[v] * 3 == v ? "x3" : "/2") + out;
    v = prev[v];
  }
  out = "1" + out;
  int m = 1;
  // evaluate the expression
  for(size_t i=1; i<out.length(); i+=2) {
      if (out[i]=='x')
        m *= 3;
      else
        m /= 2;
  }
  assert(m == target);
  cout << out << " = " << m <<endl;
}

void showStat(map<int,int>& prev) {
  cout << "#entries in map = " << prev.size() << endl;
  cout << "max value during search = " << (--prev.end())->first << endl;
}

void m3d2(int target) {
  map<int, int> prev;
  queue<int> q;
  int v = 1;
  q.push(1); prev[1] = - 1;
  while( !q.empty() ) {
    v = q.front() ; q.pop();
    if (v == target) break;
    int v2 = v/2;
    int v3 = v*3;
    if (prev[v2] == 0)  { //if we've never found v2
      q.push(v2); prev[v2] = v;
    }
    if (prev[v3] == 0)  { //if we've never found v3
      q.push(v3); prev[v3] = v;
    }
  }
  if (v == target) {
    showSolution(target, prev);
    showStat(prev);
  }
}

int main() {
  int n;
  cout << "n = ";
  cin >> n;
  m3d2(n);
  return 0;
}
