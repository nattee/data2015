#include <iostream>
#include <stack>

using namespace std;

int main() {
  cout << endl << "Create a stack" << endl;
  stack<int> s;

  cout << endl << "Add some data into the stack" << endl;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(15);

  cout << endl << "Check the top" << endl;
  cout << "Top is " << s.top() << endl;
  cout << "Sadly, stack does not have .bottom() or .back() " << endl;
  //cout << "Back is " << s.back() << endl;


  cout << endl << "Display all " << s.size() << " members" << endl;
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
}

