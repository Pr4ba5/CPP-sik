#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout <<"Enter the value for a: ";
    cin >> a;
    cout <<"Enter the value for b: ";
    cin >> b;
    cout <<"Enter the value for c: ";
    cin >> c;



    if((a > b)&& (a > c)){
        cout << a << " is largest among three." << endl;
    }
    else if((a < b)&& (b > c)){
        cout << b << " is largest among three." << endl;
    }
    else{
         cout << c << " is largest among three." << endl;
    }



}