#include<iostream>
#include<string>
using namespace std;

struct Book{
    string title;
    string author;
    float price;
};

int main(){
    Book books[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter the details for book" << i + 1 << ":\n";
        cout << "Enter the book title, author, price: ";
        cin >> books[i].title >> books[i].author >> books[i].price;
    }

    for(int i = 0; i < 5; i++){
        cout << "DETAILS OF BOOK" << i + 1 << ":\n";
        cout << "NAME: " << books[i].title << endl;
        cout << "AUTHOR: " << books[i].author << endl;
        cout << "PRICE: " << books[i].price << endl;
    }
}