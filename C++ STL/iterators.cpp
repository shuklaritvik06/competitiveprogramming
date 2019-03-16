#include <iostream>
#include <vector>
using namespace std;
int main() {
  // Declaring a vector
  int arr[] = {1, 2, 3};
  vector<int> v(arr, arr + 3);

  // Declaring an iterator
  vector<int>::iterator i;

  int j;

  cout << "Without iterators = ";

  // Accessing the elements without using iterators
  for (j = 0; j < 3; ++j) {
    cout << v[j] << " ";
  }

  cout << "\nWith iterators = ";

  // Accessing the elements using iterators
  for (i = v.begin(); i != v.end(); ++i) {
    cout << *i << " ";
  }

  // Adding one more element to vector
  v.push_back(4);

  cout << "\nWithout iterators = ";

  // Accessing the elements without using iterators
  for (j = 0; j < 4; ++j) {
    cout << v[j] << " ";
  }

  cout << "\nWith iterators = ";

  // Accessing the elements using iterators
  for (i = v.begin(); i != v.end(); ++i) {
    cout << *i << " ";
  }

  // Deleting a element using iterators
  for (i = v.begin(); i != v.end(); ++i) {
    if (i == v.begin() + 1) {
      i = v.erase(i);
      // i now points to the element after the
      // deleted element
    }
  }
  return 0;
}
