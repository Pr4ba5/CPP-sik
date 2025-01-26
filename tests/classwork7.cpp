#include <iostream> 
using namespace std;
int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if 
    (( ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z'))
    {
        cout << "Entered character is alphabet.";

    }

    else if(ch >= '0' && ch <= '9'){
        cout << "Entered character is digit.";
    }

    else{
        cout << "Entered character is special character.";
    }


    return 0;
}