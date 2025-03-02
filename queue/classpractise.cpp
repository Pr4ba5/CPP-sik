#include <iostream>
using namespace std;

struct Queue
{
    int *arr;
    int front;
    int rear;
    int capacity;
};

void initializeQueue(Queue &q, int capacity)
{
    q.capacity = capacity;
    q.front = 0;
    q.rear = -1;
    q.arr = new int[capacity];
}

void enqueue(Queue &q, int item)
{
    if (q.rear == q.capacity - 1)
    {
        cout << "Queue Overflow: Cannot enqueue " << item << endl;
    }
    else
    {
        q.rear++;
        q.arr[q.rear] = item;
        cout << "Enqueued: " << item << endl;
    }
}

void dequeue(Queue &q)
{
    if (q.front > q.rear)
    {
        cout << "Queue Underflow: Queue is empty!" << endl;
    }
    else
    {
        cout << "Dequeued: " << q.arr[q.front] << endl;
        q.front++;
    }
}

void peek(Queue &q)
{
    if (q.front > q.rear)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Front element: " << q.arr[q.front] << endl;
    }
}

bool isEmpty(Queue &q)
{
    return q.front > q.rear;
}

// IsFull operation: Check if the queue is full
bool isFull(Queue &q)
{
    return q.rear == q.capacity - 1;
}

int size(Queue &q)
{
    return q.rear - q.front + 1;
}

void display(Queue &q)
{
    if (isEmpty(q))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = q.front; i <= q.rear; i++)

        {

            cout << q.arr[i] << " ";
        }
        cout << endl;
    }
}

void clear(Queue &q)
{
    q.front = 0;
    q.rear = -1;
    cout << "Queue cleared!" << endl;
}

int main()
{
    Queue q;
    initializeQueue(q, 5); // Initialize a queue with a capacity of 5
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60); // Should show Overflow because capacity is 5
    peek(q);
    dequeue(q);
    dequeue(q);
    cout << "Queue size: " << size(q) << endl;
    enqueue(q, 60);
    enqueue(q, 70);
    display(q);
    cout << "Queue size after more enqueues: " << size(q) << endl;
    clear(q);
    return 0;
}