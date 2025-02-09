// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int a = 3, b = 6;
    int *c, *d;
    c = &a;
    d = &b;
    *c = 100;
    c = d;
    *d = 200;
    cout << "a = " << a << endl;
    cout <<"b = " << b << endl;
    *c = 300;
    cout << "b = " << b << endl;
    
    return 0;
}