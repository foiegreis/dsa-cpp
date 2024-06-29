#include <iostream>

/* Merges two sorted Doubly linked Lists into a sorted doubly linked list */

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


    // Method to merge two sorted doubly linked lists into one sorted list
    void mergeSortedLists(DoublyLinkedList& list2) {
        Node* current1 = head;
        Node* current2 = list2.head;
        DoublyLinkedList mergedList;
        while (current1 && current2) {
            if (current1->data <= current2->data) {
                mergedList.append(current1->data);
                current1 = current1->next;
            } else {
                mergedList.append(current2->data);
                current2 = current2->next;
            }
        }
        while (current1) {
            mergedList.append(current1->data);
            current1 = current1->next;
        }
        while (current2) {
            mergedList.append(current2->data);
            current2 = current2->next;
        }
        *this = mergedList; // Update the current list with merged list
    }

};

int main(){

    DoublyLinkedList list1;
    DoublyLinkedList list2;

    // Append elements to list1 and list2
    list1.append(1);
    list1.append(3);
    list1.append(5);

    list2.append(2);
    list2.append(4);
    list2.append(6);

    // Print initial lists
    std::cout << "List 1:" << std::endl;
    list1.printList();
    std::cout << "List 2:" << std::endl;
    list2.printList();

    // Merge list2 into list1
    list1.mergeSortedLists(list2);

    // Print merged list
    std::cout << "Merged sorted list:" << std::endl;
    list1.printList();

    return 0;
}