#include <iostream>
#include <stack>

/* Rotates the Linked List right by k places */

//Node struct
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};

class SinglyLinkedList
{
private: 
    //Initialize head
    Node* head;

public:
    //Constructor
    SinglyLinkedList() : head(nullptr) {}


    //Append node at the end
    void append(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }

    void printList() const {
        Node* current = head;
        if (current == nullptr){
            std::cout << "The list is empty" << std::endl;
        }

        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // ROTATES RIGHT BY k PLACES
    void rotateRightByKPlaces(int k){
        if (!head || k == 0) {
            return;
        }

        // Find the length of the linked list
        int length = 1;
        Node* current = head;
        while (current->next) {
            current = current->next;
            length++;
        }

        // Make the list circular
        current->next = head;

        // Find the new head and tail
        k = k % length;
        int steps_to_new_head = length - k;
        Node* new_tail = head;
        for (int i = 0; i < steps_to_new_head - 1; ++i) {
            new_tail = new_tail->next;
        }

        Node* new_head = new_tail->next;
        new_tail->next = nullptr;
        head = new_head;

    }

};


int main(){

   // Create  SinglyLinkedList
    SinglyLinkedList list;

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