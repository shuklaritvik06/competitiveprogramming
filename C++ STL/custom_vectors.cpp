#include<iostream>
#include<vector>
using namespace std;

class Human{
public:
    int age;

};

int main(){
    vector<Human> v;
    v.reserve(100);

    Human kunal;
    kunal.age = 21;

    v.push_back(kunal);
    cout << v.front().age;
    return 0;
}
