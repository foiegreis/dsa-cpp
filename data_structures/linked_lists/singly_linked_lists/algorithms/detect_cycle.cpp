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

    bool detectCycle() {
        Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){
                return true; //cycle detected
            }
        }
        return false;
    }   

};




int main(){

    SinglyLinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.append(6);

    //Create cycle
    Node* tail = list.getTail();
    tail->next = list.getHead()->next->next;

    std::cout << "Cycle detected: " << (list.detectCycle()? "true" : "false") << std::endl; 


    return 0;
}