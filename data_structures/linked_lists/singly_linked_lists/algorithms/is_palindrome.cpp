#include <iostream>
#include <stack>

/* Checks if singly linked list is palindrome. Uses the slow fast pointer approach*/

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

    //CHECKS IF LINKED LIST DATA ARE PALINDROME
    bool isPalindrome(){
        Node* slow = head;
        Node* fast = head;
        std::stack<int> stack;

        while (fast && fast->next){
            stack.push(slow->data);
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast) { //Skip the middle element if the length is odd
            slow = slow->next;
        }

        while (slow){
            if (slow->data != stack.top()){
                return false;
            }
            stack.pop();
            slow = slow->next;
        }
        return true;

    }

};


int main(){

   // Create  SinglyLinkedList
    SinglyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(2);
    list.append(1);

    list.printList();

    // Check if palindrome
    bool palindrome = list.isPalindrome();

    // Print merged list
    std::cout << "Linked list is palindrome:  " << (palindrome? "true" : "false") << std::endl;
    return 0;
}