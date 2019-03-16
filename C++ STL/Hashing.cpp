#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    // unordered_map<string,int> m;
    map<string,int> m;

    m["Mango"] = 100;
    m.insert(make_pair("Apple", 120));

    // Search
    if(m.count("Apple") == 1){
        // m.count returns 0 if element is not present and returns 1 if the element is present
        cout << "Price : " << m["Apple"] << endl;
    }

    // iterators
    auto f = m.find("Mango");   // f points to a pair
    if(f != m.end()){
        cout << f->first << " " << f->second << endl;
    }else{
        cout << "Mango does not exist";
    }

    // Deleting
    m.erase("Mango");

    return 0;
}
