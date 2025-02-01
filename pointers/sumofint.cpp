#include<iostream>
using namespace std;
int main(){
    int a, b;
    int *ptr1, *ptr2;

    cout << "Enter two integer: ";
    cin >> a >> b;

    ptr1 = &a;
    ptr2 = &b;

    int sum = *ptr1 + *ptr2;

    cout << "The sum of two integer is: " << sum;

    return 0;
}