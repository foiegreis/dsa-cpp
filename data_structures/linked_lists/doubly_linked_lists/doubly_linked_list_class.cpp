#include <iostream>

/* Defines a Doubly Linked List class*/


class DoublyLinkedList
{
private: 
    //Node struct
    struct Node{
        int data;
        Node* next;
        Node* prev;
        Node(int val) : data(val), next(nullptr), prev{nullptr} {}
    };

    //Initialize head
    Node* head;

public:
    //Constructor
    DoublyLinkedList() : head(nullptr) {}

    //Deconstructor
    ~DoublyLinkedList(){
        Node* current = head;
        Node* nextNode;
        while (current != nullptr){
            nextNode = current->next; //save pointer to the next node
            delete current; //delete current node
            current = nextNode; //move to the next node
        }
    }

    //Prepend node before current head
    void prepend(int data) {
        Node* newNode = new Node(data);

        newNode->next = head;
        if (head != nullptr){
            head->prev = newNode;
        }
        head = newNode;
    }

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
        newNode->prev = last;
    }

    //Insert new node after specific node
    void insertAfter(Node* prevNode, int data){

        if (prevNode == nullptr) {
            std::cout << "Previous node cannot be null." << std::endl;
            return;
        }

        Node* newNode = new Node(data);
        newNode->next = prevNode->next;
        newNode->prev = prevNode;

        if (prevNode->next != nullptr){
            prevNode->next->prev = newNode;
        }
        prevNode->next = newNode;
    }

    //Deletes node by data value
    void deleteByKey(int key){
        Node* temp = head;

        while (temp != nullptr && temp->data != key)
        {
            temp = temp->next;
        }
        if (temp == nullptr) {
            std::cout << "Key not found in linked list" << std::endl;
            return;
        }
        if (temp->prev != nullptr){
            temp->prev->next = temp->next;
        } else{
            head = temp->next;
        }
        if (temp->next != nullptr){
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    //staticmethod
    void printList() const {
        Node* current = head;
        if (current == nullptr){
            std::cout << "The list is empty" << std::endl;
            return;
        }

        while (current != nullptr) {
            std::cout << current->data << " <--> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    //get head
    Node* getHead() const{
        return head;
    }

    //search for key in linked list
    Node* search(int key) const {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == key) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }
    
    //check if linked list is empty
    bool isEmpty(){
        return head == nullptr;
    }

    //get size of linked list
    int getSize() const{
        int size = 0;

        Node* current = head;

        while(current != nullptr){
            ++size;
            current = current->next;
        }
        return size;
    }

};



int main(){

    DoublyLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.prepend(0);

    list.printList();

    list.deleteByKey(2);
    list.printList();



    return 0;
}