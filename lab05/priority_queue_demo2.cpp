#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


typedef bool(*AAA)(const int&, const int&); // Function pointer type named "AAA"

bool Compare(const int &a,const int &b)    // The actual comparator function matching the CompFunctor signature
{
  return (a > b);
}


using namespace std;
int main() {
  cout << endl << "Standard priority_queue with default comparator" << endl;
  priority_queue<int> pq;
  pq.push(1);
  pq.push(10);
  pq.push(9);
  pq.push(23);
  pq.push(5);
  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  }


  cout << endl << "priority_queue with custom comparator" << endl;
  priority_queue<int,vector<int>,AAA> pq2(Compare);
  pq2.push(1);
  pq2.push(10);
  pq2.push(9);
  pq2.push(23);
  pq2.push(5);
  while (!pq2.empty()) {
    cout << pq2.top() << endl;
    pq2.pop();
  }

}
