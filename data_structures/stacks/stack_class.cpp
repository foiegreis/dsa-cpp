#include <iostream>

// Node structure for the stack
struct Node {
    int data;
    Node* next;
};

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Push operation
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty, cannot pop.\n";
            return -1; // Or any suitable error value
        }
        int poppedValue = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Peek operation to get the top element
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty, no top element.\n";
            return -1; // Or any suitable error value
        }
        return top->data;
    }

    // Display the stack
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty.\n";
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Destructor to free allocated memory
    ~Stack() {
        Node* current = top;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        top = nullptr;
    }
};

// Example usage
int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.display(); // Output: 3 2 1

    std::cout << "Top element: " << stack.peek() << std::endl; // Output: Top element: 3

    stack.pop();
    std::cout << "Top element after pop: " << stack.peek() << std::endl; // Output: Top element after pop: 2

    stack.display(); // Output: 2 1

    return 0;
}
