#include<iostream>
using namespace std;
int main(){
    int d, *e, **f;
    d = 8;
    e = &d;
    f = &e;
    cout << d << " // " << &d << endl;
    cout << e << " // " << *e << endl;
    cout << f << " // " << &f << " // " << *f << endl;
    *e = 4;
    cout << d << " // " << e << endl;
    return 0;

}