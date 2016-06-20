#include <iostream>
#include <vector>

using namespace std;

namespace CP {
  template <typename KeyT, typename MappedT>
  class SimpleMap {
    public:
      typedef pair<KeyT,MappedT> ValueT;
      typedef ValueT* iterator;

    protected:
      std::vector<ValueT> mVect;

    public:
      
      size_t size() {
        return mVect.size();
      }

      bool empty() {
        return mVect.empty();
      }


      MappedT& operator[](KeyT key) { // O(n) --> O(1)*
        for (auto &x : mVect) {
          if (x.first == key) {
            return x.second;
          }
        }
        pair<KeyT,MappedT> p;
        p.first = key;
        p.second = MappedT();
        mVect.push_back(p);

        return mVect.back().second;
      }

      iterator find(KeyT key) { // O(n) -- > O(1)*
        for (auto &x : mVect) {
          if (x.first == key) return &x;
        }
        return end();
      }

      iterator begin() {
        return &mVect[0];
      }

      iterator end() {
        return &mVect[0+mVect.size()];
      }
  };
}

int main() {
  CP::SimpleMap<string,int> x;
  x["somchai"] = 5;
  cout << x["somchai"] << endl;
  cout << x["XXX"] << endl;

  cout << "size = " << x.size() << endl;

  x["A"] = 20;
  x["B"] = 30;
  x["somchai"] = 5000;


  auto it = x.begin();
  while (it != x.end()) {
    cout << it->first << ":" << it->second << endl;
    it++;
  }
}

