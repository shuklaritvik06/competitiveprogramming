#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  // We use binary search on monotonic functions
  // Example : Find sqrt of a number using binary search

  // What is upperbound?
  // upper_bound() is a standard library function in C++ defined in the header .
  // It returns an iterator pointing to the first element in the range [first,
  // last) that is greater than value, or last if no such element is found.

  int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
  vector<int> v(myints, myints + 8); // 10 20 30 30 20 10 10 20

  sort(v.begin(), v.end()); // 10 10 10 20 20 20 30 30

  vector<int>::iterator low, up;
  low = lower_bound(v.begin(), v.end(), 20);
  up = upper_bound(v.begin(), v.end(), 20);

  // low - v.begin() will give index because low is an iterator and
  // iterator - iterator = index
  cout << "lower_bound at position " << (low - v.begin()) << '\n';
  cout << "upper_bound at position " << (up - v.begin()) << '\n';

  // if it cannot find then it will return last

  // For arrays
  int arr[] = {10, 20, 30, 40, 50};

  // Print elements of array
  cout << "Array contains :";
  for (int i = 0; i < 5; i++)
    cout << " " << arr[i];
  cout << "\n";

  // using upper_bound
  int upper1 = upper_bound(arr, arr + 5, 35);
  int upper2 = upper_bound(arr, arr + 5, 45);

  cout << "\nupper_bound for element 35 is at position : " << (upper1) - arr;
  cout << "\nupper_bound for element 45 is at position : " << (upper2) - arr;

  return 0;
}
