#include<iostream>
using namespace std;

// O(n)
int power(int x, int n){
    if(n == 0){
        return 1;
    }

    return x * power(x, n/2);
}

// O(log(n))
int fastpower(int x, int n){
    if(n == 0){
        return 1;
    }
    int smallans = fastpower(x,n/2);
    smallans *= smallans;

    if(n & 1){
        return x * smallans;
    }
    return smallans;
}

int main(){

    cout << fastpower(3,6);
    return 0;
}
