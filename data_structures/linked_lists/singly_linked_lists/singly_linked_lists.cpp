#include <iostream>

//Node definition
struct Node{
    int data; //node data
    Node* next; //pointer to the next node

    Node(int val) : data(val), next(nullptr) {} //constructor
};

//Prints Singly Linked List
void printSinglyLinkedList(Node* head){
    if (head == nullptr){
        std::cout << "Linked list doesn't exist" << std::endl;
        return;
    }
    Node* current = head;
    while(current != nullptr){
            std::cout << current->data << " -> ";
            current = current-> next;
        }
        std::cout << "nullptr" << std::endl;
}

//Inserts node to Single Linked List
void prependNode(Node*& head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head=newNode;
}

void deleteSinglyLinkedList(Node* head){

    Node* current = head;
    while (current != nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    std::cout << "Linked list has been deleted" << std::endl;
}

int main(){

    Node* head = nullptr;

    prependNode(head, 3);
    prependNode(head, 2);
    prependNode(head, 1);

    std::cout << "Linked List after insertion: ";
    printSinglyLinkedList(head);

    deleteSinglyLinkedList(head);
    
    printSinglyLinkedList(head);


    return 0;
}