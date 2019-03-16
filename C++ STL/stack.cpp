#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  stack<string> s;
  s.push("Apple");
  s.push("Mango");
  s.push("Guava");

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop(); // removes last element
  }

  s.empty();

  return 0;
}
