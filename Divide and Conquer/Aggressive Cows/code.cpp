#include <bits/stdc++.h>
using namespace std;
int n, c;
int func(int num, int array[]) {
  int cows = 1, pos = array[0];
  for (int i - 1; i < n; i++) {
    if (array[i] - pos >= num) {
      cows++;
      if (cows == c) { // if all the cows have been placed
        return 1;
      }
      pos = array[i]; // position of previous cow updated for next cow
    }
  }
  return 0;
}
int bs(int array[]) {

  int ini = 0, last = array[n - 1], max = -1;
  while (last > ini) {
    int mid = (ini + last) / 2;
    if (func(mid, array) == 1) {
      if (mid > max) {
        max = mid;
      }
      ini = mid + 1;
    } else {
      last = mid;
    }
    return max;
  }
}
int main() {
  //
  return 0;
}
