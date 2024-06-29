#include <iostream>

/* Checks if Doubly Linked List  is palindrome */

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Destructor to free memory
    ~DoublyLinkedList() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Method to insert node at the end of the list
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Method to print the doubly linked list
    void printList() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Method to check if the doubly linked list is a palindrome
    bool isPalindrome() {
        Node* left = head;
        Node* right = tail;
        while (left && right) {
            if (left->data != right->data) {
                return false;
            }
            left = left->next;
            right = right->prev;
        }
        return true;
    }

};


int main(){

    DoublyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(2);
    list.append(1);

    list.printList();

    // Check if palindrome
    bool palindrome = list.isPalindrome();

    // Print merged list
    std::cout << "Linked list is palindrome:  " << (palindrome? "true" : "false") << std::endl;
    return 0;
}