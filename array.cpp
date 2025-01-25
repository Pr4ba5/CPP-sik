#include<iostream>
using namespace std;
int main(){
    int num[10], sum = 0;
    for (int k = 0; k < 10; k++) {
    cout << "Enter a number for slot " << k + 1 << " ? ";
    cin >> num[k];
    sum = sum + num[k];
    }
    cout << "Sum = " << sum << endl;

}