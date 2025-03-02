/*
Task: Write a C++ program to implement a DLL and initialize it with the integer 22 as the first node.
*/


#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node *prev;

};

void initNode(Node *tmphead, int n){
    tmphead-> data = n;
    tmphead->next = NULL;
    tmphead->prev = NULL;

}

//for displaying all the nodes


void addNode(Node *cur, int n){
    Node *newNode = new Node;
    newNode ->  data = n;
    newNode -> next = NULL;

    while ( cur-> next)
    {
        cur = cur->next;
    }

    cur->next - newNode;
    newNode -> prev = cur;
    
}

void displaylist(Node *cur){
    while (cur)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    cout << endl;
    
}

void insertFront(Node **tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead; // New node points to old head
    newNode->prev = NULL;     // New node is the front, so no previous

    if (*tmpHead != NULL) {
        (*tmpHead)->prev = newNode; // Old head’s prev points to new node
    }
    *tmpHead = newNode; // Update head to new node
}


void removeFront(Node **tmpHead) {
    if (*tmpHead == NULL) return; // Empty list
    if ((*tmpHead)->next == NULL) {
        cout << "Single Node!" << endl;
        delete *tmpHead;
        *tmpHead = NULL;
    } else {
        Node *temp = *tmpHead;
        *tmpHead = (*tmpHead)->next;
        (*tmpHead)->prev = NULL;
        delete temp;
    }
}

// Count total nodes
int getTotalNode(Node *cur) {
    int counter = 0;
    while (cur) {
        counter++;
        cur = cur->next;
    }
    return counter;
}

void displayReverse(Node *cur) {
    if (cur == NULL) return;
    cout << "Reverse: ";
    // Go to the last node
    while (cur->next) {
        cur = cur->next;
    }
    // Print backwards
    while (cur) {
        cout << cur->data << " ";
        cur = cur->prev;
    }
    cout << endl;
}


int main(){
    Node *head = new Node;
    initNode(head, 22);


    //adding 33 and 44
    addNode(head, 33);
    addNode(head, 44);

    cout << "Original List: ";
    displaylist(head);

    removeFront(&head); // Remove 22
    cout << "After removing front: ";
    displaylist(head);

    cout << "Total nodes: " << getTotalNode(head) << endl;

    displayReverse(head);

    return 0;
}
