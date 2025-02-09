#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to insert at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to insert after a specific node
void insertAfter(Node*& head, int prevData, int value) {
    Node* temp = head;
    while (temp != nullptr && temp->data != prevData) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "Node with value " << prevData << " not found." << endl;
    }
}

// Function to delete from the beginning
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to delete from the end
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Function to delete a specific node by value
void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Node with value " << value << " not found." << endl;
    } else {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Function to search for a node by value
bool search(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

// Function to traverse the linked list and print its elements
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Insertion at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout << "List after insertions at the beginning: ";
    printList(head);

    // Insertion at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "List after insertions at the end: ";
    printList(head);

    // Insertion after a specific node
    insertAfter(head, 20, 25);
    cout << "List after inserting 25 after node with value 20: ";
    printList(head);

    // Deletion from the beginning
    deleteFromBeginning(head);
    cout << "List after deleting from the beginning: ";
    printList(head);

    // Deletion from the end
    deleteFromEnd(head);
    cout << "List after deleting from the end: ";
    printList(head);

    // Deletion of a specific node
    deleteNode(head, 25);
    cout << "List after deleting node with value 25: ";
    printList(head);

    // Search for a node
    int valueToSearch = 40;
    if (search(head, valueToSearch)) {
        cout << "Node with value " << valueToSearch << " found in the list." << endl;
    } else {
        cout << "Node with value " << valueToSearch << " not found in the list." << endl;
    }

    return 0;
}