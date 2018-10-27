#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;


typedef bool(*AAA)(const pair<int,string>&, const pair<int,string>&); // Function pointer type named "CompFunctor" 

bool Compare(const pair<int,string> &a,const pair<int,string> &b)    // The actual comparator function matching the CompFunctor signature
{
  if (a.second > b.second) return true;
  if (a.second == b.second && a.first < b.first) return true;
  return false;
}


using namespace std;
int main() {
  cout << endl << "Standard priority_queue with default comparator" << endl;
  priority_queue<pair<int,string>> pq;
  pq.push(make_pair(1 ,"BB"));
  pq.push(make_pair(10,"BB"));
  pq.push(make_pair(10,"A"));
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();
  cout << pq.top().first << "," << pq.top().second << endl; pq.pop();

  AAA x = Compare;
  if (x( make_pair(20,"x") , make_pair(30,"y")) ) {
      cout << "hahaha" << endl;
  }


  cout << endl << "priority_queue with custom comparator" << endl;
  priority_queue<
    pair<int,string>,
    vector<pair<int,string>>,
    AAA >
      pq2(Compare);
  pq2.push(make_pair(1 ,"BB"));
  pq2.push(make_pair(10,"BB"));
  pq2.push(make_pair(10,"A"));
  cout << pq2.top().first << "," << pq2.top().second << endl; pq2.pop();
  cout << pq2.top().first << "," << pq2.top().second << endl; pq2.pop();
  cout << pq2.top().first << "," << pq2.top().second << endl; pq2.pop();

}
