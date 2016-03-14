#ifndef __queue_version_2__
#define __queue_version_2__

#include <vector>

namespace CP {

//write a queue that utilize vector class
//you are not allowed to add any data member
//don't worry about speed of each operation, just make it work.

template <typename t>
class queue{
  protected:
    std::vector<t> v;

  public:
    queue() {
      //write your code here, if necessary
      v = new Vector<t>
    }

    queue(const queue<t>& a) {
      //write your code here, if necessary
      v = a.v;
//      for (auto x : a.v)
//        v.push_back(x);
//      for (int i = 0;i < a.size();i++) {
//        v.push_back[a.v[i]];
//
//      }
    }

    ~queue() {
      //write your code here
    }

    size_t size() {
      //write your code here
      return v.size();
    }
    bool empty() {
      //write your code here
      return v.empty();
    }

    const t& front() {
      //write your code here
    }

    const t& back() {
      //write your code here
      return v.back();
      //return v[v.size()-1];
    }

    void pop( ) {
      //write your code here
//      for (int i = 0;i < v.size()-1;i--) {
//        v[i] = v[i+1];
//      }
//      v.pop_back();
      v.erase(v.begin());
    }

    void push(const t& val) {
      //write your code here
      v.push_back(val);
    }
};

}


#endif
