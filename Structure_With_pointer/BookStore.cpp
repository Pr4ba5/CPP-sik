
/*
Write a C++ program that defines a structure called Book containing title (string),
author (string), and price (float). Declare an array of Book structures. Use a pointer to
input information for each book in the array and then display the details of all books
using the pointer.

*/
#include <iostream>
#include <string>
using namespace std;


struct  Book{
    string title;
    string author;
    float price;

};

int main(){

    int n;

    cout << "Enter the number of books: ";
    cin >> n;

    Book *Bookptr = new Book[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "\nEnter details for book no " << i + 1 << ":\n" << endl;

        cout << "Enter Title of Book: ";
        getline(cin, (Bookptr + i)->title);

        cout << "Enter author of Book: ";
        getline(cin, (Bookptr + i)->author);

        cout << "Enter Price of Book: ";
        cin >> (Bookptr + i)->price;
    }


    cout << "=======\nBook Details:=======\n";
    for(int i = 0; i < n; i++)
    {
    cout << "\nBook " << i+1 << ":\n";
    cout << "Title: " << (Bookptr + i)->title << endl;
    cout << "Author: " << (Bookptr + i)->author << endl;
    cout << "Price: " << (Bookptr + i)->price << endl;
    }

    return 0;

}
