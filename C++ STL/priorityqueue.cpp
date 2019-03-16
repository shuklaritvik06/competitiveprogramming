#include <functional>
#include <iostream>
#include <queue>
#include <vector>

// #include <bits/stdc++.h>
using namespace std;
int main() {

  // priority_queue<int> pq;   // will make max heap
  // for min heap
  priority_queue<int, vector<int>, greater<int> > pq;   // space require betwee two >>
  // third argument is comparator, can be user defined or inbuilt. Here
  // we have use inbuilt

  int arr[10] = {5, 6, 17, 9, 8, 11};

  // insert these in queue
  for (int i = 0; i < 6; i++) {
    pq.push(arr[i]);
  }

  // Heap - By default it is making a MAX HEAP.
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }

  return 0;
}
