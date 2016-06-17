#include <iostream>
#include <vector>
#include <stack>
#include <assert.h>

using namespace std;

namespace CP {

  template <typename T>
  class stack {
    protected:
      vector<T> mVect;

    public:
      stack() {

      }

      size_t size() {
        return 0;

      }

      bool empty() {
        return false;

      }

      T top() {
        return T();
      }

      void pop() {

      }

      void push(T value) {

      }


  };

}

void test1() {
  stack<int> s;
  assert(s.size() == 0);
  assert(s.empty());

  s.push(1);
  s.push(2);
  s.push(3);

  assert(s.top() == 3);
  assert(s.size() == 3);

  s.pop();
  assert(s.top() == 2);
  s.pop();
  assert(s.top() == 1);
  s.pop();
  assert(s.empty());
}

void test2() {
  stack<int> s1,s2;
  s1.push(10);
  s1.push(20);
  s1.push(30);

  s2 = s1;

  assert(s2.top() == 30);
  assert(s2.size() == 3);

  s2.pop();
  assert(s2.top() == 20);
  s2.pop();
  assert(s2.top() == 10);
  s2.pop();
  assert(s2.empty());

  assert(s1.top() == 30);
  assert(s1.size() == 3);
}

void test3() {
  int n = 1e7;
  stack<float> s;
  for (int i = 0;i < n/10;i++) {
    for (int j = 0;j < 10;j++) {
      s.push(0.5+j);
    }
    for (int j = 9;j >= 0;j--) {
      assert(s.top() == 0.5+j);
      s.pop();
    }
    assert(s.size() == 0);
  }
}

int main() {
  test1(); cout << "test1 OK" << endl;
  test2(); cout << "test2 OK" << endl;
  test3(); cout << "test3 OK" << endl;
}

