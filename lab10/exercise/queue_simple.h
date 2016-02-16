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
    }

    queue(const queue<t>& a) {
      //write your code here, if necessary
    }

    ~queue() {
      //write your code here
    }

    size_t size() {
      //write your code here
    }
    bool empty() {
      //write your code here
    }

    const t& front() {
      //write your code here
    }

    const t& back() {
      //write your code here
    }

    void pop( ) {
      //write your code here
    }

    void push(const t& val) {
      //write your code here
    }
};

}


#endif
