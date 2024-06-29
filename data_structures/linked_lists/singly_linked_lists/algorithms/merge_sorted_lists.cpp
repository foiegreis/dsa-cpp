#include <iostream>

/*Merges two sorted linked lists into one sorted list */

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

    //FIND MIDDLE 
    Node* findMiddle(){
        if (head == nullptr){
            return nullptr;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void mergeSortedLists(SinglyLinkedList& list2){
        Node* dummy = new Node(0);
        Node* current = dummy;
        Node* list1 = head;
        Node* list2_head = list2.head;
        
        while (list1 && list2_head) {
            if (list1->data <= list2_head->data) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2_head;
                list2_head = list2_head->next;
            }
            current = current->next;
        }
        
        if (list1) {
            current->next = list1;
        }
        if (list2_head) {
            current->next = list2_head;
        }
        
        head = dummy->next;
    }
    

};


int main(){

   // Create two instances of SinglyLinkedList
    SinglyLinkedList list1;
    SinglyLinkedList list2;

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