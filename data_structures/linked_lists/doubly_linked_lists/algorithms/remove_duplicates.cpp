#include <iostream>

/* Removes duplicates in Doubly Linked List */

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

    // Method to remove duplicates from the doubly linked list
    void removeDuplicates() {
        Node* current = head;
        while (current) {
            Node* runner = current->next;
            while (runner) {
                if (runner->data == current->data) {
                    Node* temp = runner;
                    runner->prev->next = runner->next;
                    if (runner->next) {
                        runner->next->prev = runner->prev;
                    }
                    delete temp;
                }
                runner = runner->next;
            }
            current = current->next;
        }
    }


};

int main(){

    DoublyLinkedList list;

    list.append(1);
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(3);
    list.append(4);

    list.printList();

    // Remove duplicates
    list.removeDuplicates();

    std::cout << "Linked after removing duplicates: " << std::endl;
    list.printList();

    return 0;
}