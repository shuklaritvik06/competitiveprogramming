#include<iostream>
using namespace std;

// char nums[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// OR
string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string *nums = str;

void fun(int n){
    if(n == 0){
        return;
    }
    fun(n / 10);
    cout << nums[n % 10] << " ";
}

int main(){

    fun(2048);

    return 0;
}
