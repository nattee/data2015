#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> pq;

  cout << "Add data" << endl;
  pq.push(10);
  pq.push(1);
  pq.push(100);
  pq.push(55);
  pq.push(-10);
  pq.push(55);
  pq.push(55);
  pq.push(-10);
  pq.push(-10);
  pq.push(-10);


  cout << "look at max" << endl;
  cout << pq.top() << endl;

  cout << "delete max" << endl;
  pq.pop();
  cout << pq.top() << endl;

  cout << "display remaining " << pq.size() << " members. Notice that pq can contain multiple items" << endl;
  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  }
}

