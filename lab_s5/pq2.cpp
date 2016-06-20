#include <iostream>
#include <vector>
#include <queue>
#include <assert.h>
#include <algorithm>

using namespace std;

namespace CP {
template <typename T>
class priority_queue {
  protected:
    vector<T> mVect;
  public:
    priority_queue() {

    }

    size_t size() {
      return mVect.size();

    }

    bool empty() {
      return mVect.empty();
    }

    T top() { //O(1)
      return mVect.back();
    }

    void pop() { //O(1) --> O(lg n)
      mVect.pop_back();
    }

    void push(T value) { //O(n) --> O(lg n)
      // write this one
      //mVect.push_back(value);
      size_t pos = mVect.size()-1;
      while (pos >= 0) {
        if (mVect[pos] < value) break;
        pos--;
      }
      if (pos < 0) pos++;
      mVect.insert(mVect.begin() + pos + 1,value);
    }
};
}

class AAA {
  bool operator()(int x,int y) {
    return x+10 > y;
  }
};


void test1() {
  CP::priority_queue<int,AAA> p1;

  assert(p1.empty());
  assert(p1.size() == 0);

  p1.push(1);
  assert(p1.top() == 1);

  p1.push(-4);
  assert(p1.top() == 1);


  p1.push(9);
  assert(p1.top() == 9);
  assert(p1.size() == 3);

  p1.pop();
  assert(p1.top() == 1);

  p1.pop();
  assert(p1.top() == -4);


  p1.pop();
  assert(p1.empty());
}

void test2() {
  CP::priority_queue<int> p;
  int n = 1e3;
  for (int i = 0;i < n;i++) {
    p.push(i);
  }

  for (int i = n-1;i >= 0;i--) {
    assert(p.top() == i);
    p.pop();
  }
}


int main() {
  test1(); cout << "Test1 OK" <<endl;
  test2(); cout << "Test2 OK" <<endl;
}

