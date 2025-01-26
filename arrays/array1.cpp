/*
An array is a collection of elements of the same type, stored in contiguous memory locations. Arrays make it easier to work with multiple data items without creating individual variables for each one.
*/

#include<iostream>
using namespace std;
int main(){
    int numbers[5] = {10,11,23,34,55}; //here i've defined a array with variable name numbers with integer datatype
    //i have allocated 5 contigious memory location for it

    cout << numbers[1] << endl; //printing second value from array

    numbers[0] = 19;//modifiying exisiting value from array index 0(first element)


    cout << numbers[0] << endl;

    cout << "Accessing all the numbers form array: " << endl;


    //or else to access all the elements for array we can use loops
    for(int a = 0; a < 5; a++){
        cout << numbers[a] << endl;
    }

}