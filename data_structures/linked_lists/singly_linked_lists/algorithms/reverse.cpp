#include <iostream>

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


    Node* getHead() const{
        return head;
    }

    Node* getTail() const{
        if (head == nullptr){
            return nullptr;
        }

        Node* current = getHead();
        while (current->next != nullptr){
            current = current->next;
        }
        return current;
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

    //REVERSE 
    void reverseList(){
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

};



int main(){

    SinglyLinkedList list;

    list.append(0);
    list.append(1);
    list.append(2);
    list.append(3);

    list.printList();

    list.reverseList();
    list.printList();


    return 0;
}