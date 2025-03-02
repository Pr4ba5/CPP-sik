#include <stdio.h>
#include <stdlib.h>

// Structure for a queue node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure for the queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue* q) {
    q->front = q->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(Queue* q) {
    return (q->front == NULL);
}

// Function to enqueue an element
void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) { // If the queue is empty
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("%d enqueued to the queue.\n", value);
}

// Function to dequeue an element
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }

    Node* temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) { // If queue becomes empty
        q->rear = NULL;
    }

    free(temp);
    printf("%d dequeued from the queue.\n", data);
    return data;
}

// Function to get the front element
int peek(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. No front element.\n");
        return -1;
    }
    return q->front->data;
}

// Function to display the queue elements
void displayQueue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    
    Node* temp = q->front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test the queue operations
int main() {
    Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);

    dequeue(&q);
    displayQueue(&q);

    printf("Front element: %d\n", peek(&q));

    dequeue(&q);
    dequeue(&q);
    dequeue(&q); // Attempting to dequeue from an empty queue

    return 0;
}
