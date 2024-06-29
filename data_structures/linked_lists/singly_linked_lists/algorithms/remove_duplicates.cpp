#include <iostream>
#include <stack>

/* Removes duplicates from sorted linked list */

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

    // REMOVES DUPLICATES FROM SORTED LINKED LIST
    void removeDuplicates(){
        if (!head){
            return;
        }
        Node* current = head;
        while (current && current->next){
            if (current->data == current->next->data){
                Node* nextNode = current->next;
                current->next = current->next->next;
                delete nextNode;
            } else {
                current = current->next;
            }
        }

    }

};


int main(){

   // Create  SinglyLinkedList
    SinglyLinkedList list;

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