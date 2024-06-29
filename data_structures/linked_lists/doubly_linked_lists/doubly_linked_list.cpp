#include <iostream>

/* Defines Doubly Linked List */


//Node definition 
struct Node{
    int data; //node data
    Node* next; //pointer to the next node
    Node* prev; //pointer to the prev node

    Node(int val) : data(val), next(nullptr), prev{nullptr} {} //constructor
};

//Prints Doubly Linked List
void printDoublyLinkedList(Node* head){
    if (head == nullptr){
        std::cout << "Linked list doesn't exist" << std::endl;
        return;
    }
    Node* current = head;
    while(current != nullptr){
            std::cout << current->data << " <--> ";
            current = current-> next;
        }
        std::cout << "nullptr" << std::endl;
}

//Inserts node to Doubly Linked List
void prependNode(Node*& head, int val){
    Node* newNode = new Node(val);
    if (head!= nullptr){
        head->prev = newNode;
    }
    newNode->next = head;
    head = newNode;
}

void deleteDoublyLinkedList(Node*& head){
    Node* current = head;

    while (current != nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    std::cout << "Linked list has been deleted" << std::endl;
}

int main(){

    Node* head = nullptr;

    prependNode(head, 3);
    prependNode(head, 2);
    prependNode(head, 1);

    std::cout << "Doubly Linked List after insertion: ";
    printDoublyLinkedList(head);

    deleteDoublyLinkedList(head);
    
    printDoublyLinkedList(head);


    return 0;
}