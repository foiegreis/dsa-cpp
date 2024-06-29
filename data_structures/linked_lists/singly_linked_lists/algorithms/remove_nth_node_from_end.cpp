#include <iostream>

/* Removes the nth element in the list from the end */

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

    int getSize() const{
        int size = 0;
        Node* current = head;

        while(current != nullptr){
            ++size;
            current = current->next;
        }
        return size;
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

    //REMOVE NTH NODE FROM END
    void removeNthNodeFromEnd(int n){
        int size = getSize();
        if (size < n){
            std::cout << "The value n is outside the linked list range" << std::endl;
        }

        //Edge case when n is equal to the length of the list
        if (n == size){
            head = head->next;
            return;
        }

        //Find the (length - nth) node from the beginning
        Node* prev = nullptr;
        Node* current = head;
        int count = 0;
        
        while (current != nullptr){
            if (count == size - n){
                if (prev != nullptr){
                    prev->next = current->next;
                } else {
                    head = current->next;
                }
                break;
            }
            prev = current;
            current = current->next;
            ++count;
        }
    }   
    

};


int main(){

   // Create two instances of SinglyLinkedList
    SinglyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.append(6);

    list.printList();

    // Merge list2 into list1
    int n = 3;
    list.removeNthNodeFromEnd(n);

    // Print merged list
    std::cout << "List after removing the " << n << " th key from he end:" << std::endl;
    list.printList();
    return 0;
}