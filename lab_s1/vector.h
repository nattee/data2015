#ifndef _CP_VECTOR_INCLUDED_
#define _CP_VECTOR_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once

namespace CP { 

template <typename T>
class vector
{
  public:
    typedef T* iterator;

  protected:
    T *mData;
    size_t mCap;
    size_t mSize;

    void rangeCheck(int n) {
      if (n < 0 || (size_t)n >= mSize) {
        throw std::out_of_range("index of out range") ;
      }
    }

    void expand(size_t capacity) {
    }

    void ensureCapacity(size_t capacity) {
    }

  public:
    //-------------- constructor & copy operator ----------

    // copy constructor
    vector(const vector<T>& a) {
    }

    // default constructor
    vector() {
    }

    // constructor with initial size
    vector(size_t cap) {
    }

    // copy assignment operator using copy-and-swap idiom
    vector<T>& operator=(vector<T> other) {
    }

    ~vector() {
    }

    //------------- capacity function -------------------
    bool empty() const {
    }

    size_t size() const {
    }

    size_t capacity() const {
    }

    void resize(size_t n) {
    }

    //----------------- iterator ---------------
    iterator begin() {
    }

    iterator end() {
    }
    //----------------- access -----------------
    T& at(int index) {
    }

    T& at(int index) const {
    }

    T& operator[](int index) {
    }

    T& operator[](int index) const {
    }

    //----------------- modifier -------------
    void push_back(const T& element) {
    }

    void pop_back() {
    }

    iterator insert(iterator it,const T& element) {
    }

    void erase(iterator it) {
    }

    void clear() {
    }


    //-------------- extra (unlike STL) ------------------
    void insert_by_pos(size_t it,const T& element) {
    }

    void erase_by_pos(int index) {
    }

    void erase_by_value(const T& element) {
    }

    bool contains(const T& element) {
      //return true only when element is in this vector
      return false;
    }

    int index_of(const T& element) {
      //return -1 when not found
      return 0;
    }
};

}

#endif


