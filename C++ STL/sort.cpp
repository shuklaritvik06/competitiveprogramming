#include <algorithm>
#include <iostream>
using namespace std;

bool myCompare(int a, int b) { return a > b; }

int main() {
  int a[] = {4, 5, 3, 2, 3, 4, 8, 6};
  int n = sizeof(a) / sizeof(int);

  sort(a, a + n, myCompare); // here n denotes how many elements from the
                             // starting we have to sort a + n = [a + n)
                             // this uses randamise quicksort internally

  return 0;
}
