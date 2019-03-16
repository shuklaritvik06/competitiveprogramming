// http://www.cplusplus.com/reference/string/string/

#include <algorithm>
#include <iostream>
using namespace std;
bool compare(string a, string b) { a.length() > b.length(); }
int main() {
  string s("Hello World");
  string s2 = "Another way";

  cout << s2.length() << endl;
  for (int j = 0; j < s2.length(); j++) {
    cout << s2[j] << " ";
  }

  cout << endl;
  cout << s << endl;
  cout << s2 << endl;

  string s3;
  getline(cin, s3); // taks a string object
  cout << s3 << endl;

  string arr[] = {"Apple", "Mango", "Banana", "Guava"};
  for (int i = 0; i < 4; i++) {
    cout << arr[i] << endl;
  }
  string c = "abc";
  string d = c; // wont change d this is pass by value
  c[0] = 'd';
  cout << c << endl;
  cout << d << endl;

  sort(arr, arr + 4, compare);
  for (int i = 0; i < 4; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
