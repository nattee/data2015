#ifndef _CP_PAIR_INCLUDED_
#define _CP_PAIR_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once

namespace CP {

template </*  fix me */>
class triplet
{
  public:
    // you need to declare some data member  here

    // copy constructor
    pair(const pair<T1,T2, T3>& a) {
      //write something here
    }

    // default constructor, using initializer list
      //write something here

    // write some custom constructor

    // copy assignment operator using traditional assignment
    pair<T1,T2>& operator=(const pair<T1,T2>& other) {
      first = other.first;
      second = other.second;
      return *this;
    }

    // equality operator
    bool operator==(const pair<T1,T2> &other) {
      return (first == other.first && second == other.second);
    }

    // comparison operator
    bool operator<(const pair<T1,T2> &other) const {
      return ((first < other.first) ||
              (first == other.first && second < other.second));
    }

};

}

#endif



