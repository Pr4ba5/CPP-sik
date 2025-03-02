#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Dequeue elements
    q.pop();
    cout << "After popping, front element: " << q.front() << endl;

    // Check if queue is empty
    if (q.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }

    return 0;
}
