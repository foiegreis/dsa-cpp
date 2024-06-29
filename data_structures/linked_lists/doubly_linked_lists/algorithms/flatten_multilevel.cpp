#include <iostream>

/* Flattens Multilevel Doubly Linked List */

// Node definition
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node* child;

    Node(int val) : data(val), prev(nullptr), next(nullptr), child(nullptr) {}
};

// DoublyLinkedList definition
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to append a node to the end of the list
    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    //get head
    Node* getHead() const{
        return head;
    }

    //get tail
    Node* getTail() const{
        return tail;
    }

    // Method to print the list including children
    void printList() const {
        Node* current = head;
        while (current) {
            std::cout << current->data << " <-> ";
            if (current->child) {
                std::cout << "(";
                // Print child list recursively
                printChildList(current->child);
                std::cout << ")";
            }
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

// Helper method to print the child list
    void printChildList(Node* childHead) const {
        Node* current = childHead;
        while (current) {
            std::cout << current->data << " <-> ";
            if (current->child) {
                std::cout << "(";
                // Print child list recursively
                printChildList(current->child);
                std::cout << ")";
            }
            current = current->next;
        }
    }

    // Function to flatten the multilevel doubly linked list
    void flatten() {
        flattenRecursive(head);
    }

    // Helper function to recursively flatten the list
    Node* flattenRecursive(Node* current) {
        if (!current) return nullptr;

        Node* originalNext = current->next; // Store original next pointer

        // Process child first if it exists
        if (current->child) {
            Node* childTail = flattenRecursive(current->child);
            childTail->next = originalNext;
            if (originalNext) {
                originalNext->prev = childTail;
            }
            current->next = current->child;
            current->child->prev = current;
            current->child = nullptr; // Remove child link
            current = childTail;
        }

        // Recursively flatten the rest of the list
        if (current->next) {
            return flattenRecursive(current->next);
        } else {
            return current;
        }
    }

   
};

// Test the implementation
int main() {
    DoublyLinkedList list;

    // Create a multilevel doubly linked list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    // Set child pointers to create a multilevel structure
    Node* head = list.getHead();
    head->child = new Node(6);
    head->child->next = new Node(7);
    head->child->next->prev = head->child;
    head->child->next->child = new Node(8);

    std::cout << "Multilevel linked list: " << std::endl;
    list.printList();


    // Flatten the list
    list.flatten();

    // Print the flattened list
    std::cout << "Flattened Doubly Linked List: ";
    list.printList();

    return 0;
}
