#include <iostream>
#include <vector>

#include "simple_pq.h"


typedef CP::priority_queue<int> PQ;
using namespace std;

void test1() {
  PQ p;
  p.push(1);
  p.push(2);
  p.push(3);
  p.push(4);
  p.push(5);

  while (p.empty() == false) {
    cout << p.top() << endl;
    p.pop();
  }

}

void test2() {
  PQ p;
  for (int i = 0;i < 10;i++) {
    p.push(10-i);
  }

  while (p.empty() == false) {
    cout << p.top() << endl;
    p.pop();
  }
}

int main() {
  test1();
  test2();
}

