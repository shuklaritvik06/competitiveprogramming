#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    int x;
    int y;
    int id;

    Car(int id, int x, int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }

    int dist(){
        return x*x + y*y;
    }
    void print(){
        cout << id << " " << x << " " << y << endl;
    }
};

// Functor - Functional Objects (must to work with pq)
class CarCompare{
public:
    // method to overload () operator
    bool operator()(Car a, Car b) {
        // cout << "Comparing " << a << " & " << b << endl;
        return a.dist() < b.dist();
    }
};

int main(){

    // CarCompare cc;
    // cc(5, 6);   // this object cc is behaving as a function i.e. why we call it a functor

    // you have many cars in 2d plane (x,y) find nearest k cars from (0,0)
    // can build the heap in O(N) and remove each in O(klogN)

    // Functor : Functional Object in C++ i.e. Functions behaving as objects
    priority_queue<Car, vector<Car>, CarCompare> pq;
    // internally it will create and object ob CarCompare and will execute the object (functor)

    int x[10] = {5,6,17,18,9,11,0,3};
    int y[10] = {1,-2,8,9,10,91,1,2};

    for(int i=0; i < 8; i++){
        Car c(i,x[i], y[i]);
        pq.push(c);
    }
    int poppings = 0;
    int k = 3;
    while (!pq.empty() && poppings<k) {
      Car p = pq.top();
      p.print();
      pq.pop();
      poppings++;
    }

    return 0;
}
