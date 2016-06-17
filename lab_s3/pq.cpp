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

    T top() {
      int ans = mVect[0];
      for (auto x : mVect) {
        if (x > ans) ans = x;
      }
      return ans;
    }

    void pop() {
      int max_pos = 0;
      for (size_t i = 0;i < mVect.size();i++) {
        if (mVect[i] > mVect[max_pos]) {
          max_pos = i;
        }
      }
      mVect.erase(mVect.begin() + max_pos);
      //mVect.erase(find(mVect.begin(),mVect.end(),top()));
    }

    void push(T value) {
      mVect.push_back(value);
    }
};
}


void test1() {
  CP::priority_queue<int> p1;

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
  int n = 1e5;
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

