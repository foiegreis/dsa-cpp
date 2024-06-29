#include <iostream>

// Node structure for the queue
struct Node {
    int data;
    Node* next;
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Enqueue operation
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue operation
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot dequeue.\n";
            return -1; // Or any suitable error value
        }
        int dequeuedValue = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
        return dequeuedValue;
    }

    // Peek operation to get the front element
    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty, no front element.\n";
            return -1; // Or any suitable error value
        }
        return front->data;
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        Node* current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free allocated memory
    ~Queue() {
        Node* current = front;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        front = rear = nullptr;
    }
};

// Example usage
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display(); // Output: 1 2 3

    std::cout << "Dequeue: " << q.dequeue() << std::endl; // Output: Dequeue: 1
    std::cout << "Front element: " << q.peek() << std::endl; // Output: Front element: 2

    q.display(); // Output: 2 3

    return 0;
}
