#include<iostream>
using namespace std;
int main(){
    int num, factorial = 1;
    cout << "Enter the number you want factoiral of: ";
    cin >> num;


    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    


    cout << "The factorial of " << num << " is " << factorial << endl;


    return 0;
}