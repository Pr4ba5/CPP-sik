#include <iostream>
using namespace std;
int main(){
    int arry1[10];

    cout << "Enter the numbers: ";
    for(int i = 0; i < 10; i++){
        cin >> arry1[i];
    }

    cout << "Entered value are: ";
    for(int a = 0; a < 10; a++){
        cout << arry1[a] << " ";
    }

    return 0;
}