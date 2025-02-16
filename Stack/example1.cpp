#include <iostream>
using namespace std;

#define MAX 5

struct  Stack
{
    int arr[MAX];
    int top;
};


void initStack(Stack &stack){
    stack.top = -1;
}

//Check is the stack if full

bool isFull(Stack &stack){
    return (stack.top == MAX -1); // if top reaches MAX -1. the stack is full
}


//check is stack is empty

bool isEmpty(Stack &stack){
    return (stack.top == -1);
}

//push an element onto the stack
void push(Stack &stack, int value){
    if(isFull(stack)){
        cout << "Stack OverFlow ! Cannot Push " << value << endl;
    }
    else{
        stack.arr[++stack.top] = value;
        cout << "Pushed " <<value<< " onto the stack." << endl;
    }
}

//pop an element from the stack

void pop(Stack &stack){
    if (isEmpty(stack)){
        cout << "Stack Underflow! Cannot pop from an empty stack. "<< endl;
    }
    else{
        int poppedValue = stack.arr[stack.top--];
        cout << "Popped " << poppedValue << " from the stack."<< endl;
    }
}

//peek the top element of the stack

void peek(Stack &stack){
    if (isEmpty(stack)){
        cout << "Stack Empty ! no element to peek." << endl;
    }

    else{
        cout << "Top element is "<< stack.arr[stack.top] << endl;
    }
}

//Display the stack element

void display(Stack &stack){
    if(isEmpty(stack)){
        cout << "Stack is empty! " << endl;
    }

    else{
        cout << "STACK ELEMENTS: ";
        for(int i = 0; i<=stack.top; i++){
            cout << stack.arr[i]<< " ";
        }

        cout << endl;
    }
}


//main function

int main(){
    Stack stack;
    initStack (stack);

    display(stack);

    //push operation

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);
    push(stack, 60); // This  will cause Stack Overflow


    display(stack);

    peek(stack);

    //Delete element from stack

    pop(stack);
    pop(stack);

    display(stack);

    //top stack

    peek(stack);


    //Delete element from stack
    pop(stack);
    pop(stack);
    pop(stack);

    display(stack);
    
    return 0;



}
