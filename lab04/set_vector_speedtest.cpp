#include <iostream>
#include <vector>
#include <chrono>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  srand(1);
  //randomly add n members into containers
  int n = 1000000;
  int m = 1000;

  std::chrono::time_point<std::chrono::system_clock> start, end;

  cout << "--------------- VECTOR ----------------------" << endl;
  //vector
  start = std::chrono::system_clock::now();
  vector<int> v;
  for (int i = 0;i < n;i++) {
    v.push_back(rand());
  }
  end = std::chrono::system_clock::now();
  printf("Adding %d numbers into a vector<int> takes %f seconds\n",n,(end-start).count()/1.0e9);

  start = std::chrono::system_clock::now();
  for (int i = 0;i < m;i++) {
    find(v.begin(),v.end(),rand());
  }
  end = std::chrono::system_clock::now();
  printf("finding %d numbers in a vector<int> takes %f seconds\n",m,(end-start).count()/1.0e9);

  cout << "--------------- SET ----------------------" << endl;
  //set
  start = std::chrono::system_clock::now();
  set<int> s;
  for (int i = 0;i < n;i++) {
    s.insert(rand());
  }
  end = std::chrono::system_clock::now();
  printf("Adding %d numbers into a set<int> takes %f seconds\n",n,(end-start).count()/1.0e9);

  start = std::chrono::system_clock::now();
  for (int i = 0;i < m;i++) {
    s.find(rand());
  }
  end = std::chrono::system_clock::now();
  printf("finding %d numbers in a set<int> takes %f seconds\n",m,(end-start).count()/1.0e9);
}

