#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number of integer you want to input: ";
    cin >> a;

    int arry1[a];
    cout << "Enter " <<a <<" integers:" << endl;
    for(int i = 0; i < a; i++){
        cin >> arry1[i];
    }

    int largest_integer = arry1[0], smallest_integer = arry1[0];
    for(int p = 1; p < a; p++){
        if(arry1[p] > largest_integer){
            largest_integer = arry1[p];
        }
        if(arry1[p] < smallest_integer){
            smallest_integer = arry1[p];
        }
    }

    cout << "The largest integer in array is: " << largest_integer << endl;
    cout << "The smallest integer in array is: " << smallest_integer << endl;


    return 0;
}