#ifndef _CP_PRIORITY_QUEUE_INCLUDED_
#define _CP_PRIORITY_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
#include <vector>
//#pragma once

namespace CP {

template <typename T>

class priority_queue
{
  protected:
    std::vector<T> v;

  public:
    //-------------- constructor ----------

    // copy constructor
    priority_queue() {
    }

    // default constructor


    ~priority_queue() {
    }

    //------------- capacity function -------------------
    bool empty() const {
      return false;
    }

    size_t size() const {
      return 0;
    }

    //----------------- access -----------------
    const T& top() {
      return v[0];
    }

    //----------------- modifier -------------
    void push(const T& element) {
    }

    void pop() {
    }


};

}

#endif


