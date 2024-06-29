#include <iostream>

/* Rotates Doubly Linked List right by k places */

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


    // Method to rotate the doubly linked list to the right by k places
    void rotateRightByKPlaces(int k) {
        if (!head || k == 0) {
            return;
        }

        int length = 1;
        Node* current = head;
        while (current->next) {
            current = current->next;
            ++length;
        }
        current->next = head;
        head->prev = current;

        k = k % length;
        int stepsToNewHead = length - k;
        Node* newTail = head;
        for (int i = 1; i < stepsToNewHead; ++i) {
            newTail = newTail->next;
        }
        head = newTail->next;
        head->prev = nullptr;
        newTail->next = nullptr;
    }
};


int main(){

    DoublyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    list.printList();

    // Rotate right by k places
    int k = 2;
    list.rotateRightByKPlaces(k);

    std::cout << "Linked after rotating right by " << k << " places:" << std::endl;
    list.printList();

    return 0;
}