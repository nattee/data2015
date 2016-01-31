#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
  cout << endl << "Create more complex queue" << endl;
  queue<pair<stack<int>,int>> q;

  cout << endl << "Add some data into the stack" << endl;
  q.push(make_pair(stack<int>(),10));
  q.back().first.push(1);
  q.back().first.push(2);
  q.back().first.push(3);
  q.back().first.push(4);
  q.back().first.push(5);

  q.push(make_pair(stack<int>(),20));
  q.back().first.push(10);
  q.back().first.push(20);

  q.push(make_pair(stack<int>(),30));
  q.back().first.push(100);
  q.back().first.push(200);

  q.push(make_pair(stack<int>(),40));
  q.back().first.push(90);
  q.back().first.push(91);
  q.back().first.push(92);
  q.back().first.push(93);


  cout << endl << "Display all " << q.size() << " members" << endl;
  while (!q.empty()) {
    cout << q.front().second << endl;
    while (!q.front().first.empty()) {
      cout << "  " << q.front().first.top() << endl;
      q.front().first.pop();
    }
    q.pop();
    cout << endl;
  }

}

