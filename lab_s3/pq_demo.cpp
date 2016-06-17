#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main2() {
  vector<int> v1 = {1,3,6,2,3,8,-2,5,9,0};
  priority_queue<int> p1;
  priority_queue<int,vector<int>,std::greater<int>> p2;

  // --- task 1 ---
  for (auto x : v1) {
    //put data into pq
    p1.push(x);
  }

  //display all data in pq from max to min
  while (p1.empty() == false) { 
    cout << p1.top() << " ";
    p1.pop();
  }
  cout << endl;

  // --- task 2 ---
  for (auto x : v1) {
    //put data into pq
    p2.push(x);
  }

  //display all data in pq from min to max
  while (p2.empty() == false) { 
    cout << p2.top() << " ";
    p2.pop();
  }
  cout << endl;
  return 0;
}

int main() {
  vector<int> v1 = {1,3,6,2,3,8,-2,5,9,0};
  priority_queue<int> p1;
  priority_queue<int> p2;

  // --- task 1 ---
  for (auto x : v1) {
    //put data into pq
    p1.push(x);
  }

  //display all data in pq from max to min
  while (p1.empty() == false) { 
    cout << p1.top() << " ";
    p1.pop();
  }
  cout << endl;


  // --- task 2 ---
  for (auto x : v1) {
    //put data into pq
    p2.push(-x);
  }

  //display all data in pq from min to max
  while (p2.empty() == false) { 
    cout << -p2.top() << " ";
    p2.pop();
  }
  cout << endl;

  return 0;
}

