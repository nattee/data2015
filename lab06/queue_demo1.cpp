#include <iostream>
#include <queue>

using namespace std;

int main() {
  cout << endl << "Create a queue" << endl;
  queue<int> q;

  cout << endl << "Add some data into the queue" << endl;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(15);

  cout << endl << "Check the front and back" << endl;
  cout << "Front is " << q.front() << endl;
  cout << "Back is " << q.back() << endl;


  cout << endl << "Display all " << q.size() << " members" << endl;
  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
}

