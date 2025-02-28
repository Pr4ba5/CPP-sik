#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;

    // Dequeue elements
    q.pop();
    std::cout << "After popping, front element: " << q.front() << std::endl;

    // Check if queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty\n";
    } else {
        std::cout << "Queue is not empty\n";
    }

    return 0;
}
