#include<iostream>
using namespace std;

int tile(int n){
    if(n < 4){
        return 1;
    }
    return tile(n-1) + tile(n-4);
}

int main(){

    cout << tile(5);

    return 0;
}
