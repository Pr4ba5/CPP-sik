/*
Pointer is the variable that stores the memory address of another variable
Pointers are powerful but can be tricky, so let's start simple
*/

// key concept: "&"(address-of opertor): Gets memory address of variable
// "*(dereference operator: Accessses the value at the memeory addresss stored in a pointer.

#include<iostream>
using namespace std;
int main(){
    int num = 20; //creating vairable num with value 20
    int* ppt = &num;//creating a poiinter that stores address of num

    cout << ppt << endl;

    *ppt = 200;
    cout << "The new value of num is " << num << endl;

}