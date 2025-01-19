#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number based on week: ";
    cin >> x;

    switch (x)
    {
    case 1: 
        cout << "Sunday";
        break;
    case 2: 
        cout << "MOnday";
        break;
    case 3: 
        cout << "Tuesday";
        break;
    case 4: 
        cout << "Wednesday";
        break;
    case 5: 
        cout << "Thursday";
        break;
    case 6: 
        cout << "Friday";
        break;
    case 7: 
        cout << "Saturday";
        break;
    
    default:
        cout << "invalid input" ;
        break;
    }
    return 0;
}