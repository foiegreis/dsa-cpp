#include <iostream>


class SinglyLinkedList
{
private: 
    //Node struct
    struct Node{
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr){}
    };

    //Initialize head
    Node* head;

public:
    //Constructor
    SinglyLinkedList() : head(nullptr) {}

    //Deconstructor
    ~SinglyLinkedList(){
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
    }

    //Insert new node after specific node
    void insertAfter(Node* prevNode, int data){

        if (prevNode == nullptr) {
            std::cout << "Previous node cannot be null." << std::endl;
            return;
        }

        Node* newNode = new Node(data);
        Node* tmp = prevNode->next;

        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }

    //Deletes node by data value
    void deleteByKey(int key){
        Node* temp = head;
        Node* prev = nullptr;

        std::cout << "Looking for key " << key << " in linked list" << std::endl;
        if (temp != nullptr && temp->data == key)
        {
            std::cout << "Key found at head position" << std::endl;
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        
        if (temp == nullptr)
        {
            std::cout << "Key not found in linked list" << std::endl;
            return;
        }

        std::cout << "Key found in linked list" << std::endl;
        prev->next = temp->next;
        delete temp;

    }
    //staticmethod
    void printList() const {
        if (head == nullptr){
            std::cout << "The list is empty" << std::endl;
        }
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    Node* getHead() const{
        return head;
    }

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
    
    bool isEmpty(){
        return head == nullptr;
    }

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

    SinglyLinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.printList();

    list.prepend(0);

    list.printList();



    return 0;
}