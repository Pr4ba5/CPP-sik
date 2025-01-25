#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<  "enter any number: ";
    cin >> num;

    if(num < 0){
        cout << "Entered number is negative.";
    }

    else{
        cout << "Entered number is positive.";
    }

    return 0;
}