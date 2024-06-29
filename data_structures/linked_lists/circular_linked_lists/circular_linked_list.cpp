#include <iostream>

/* Class that defines the Circular Linked List*/

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;
    Node* tail;

public:
    CircularLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            tail = new_node;
            new_node->next = head;  // Point to itself to form circular structure
        } else {
            new_node->next = head;
            tail->next = new_node;
            tail = new_node;
        }
    }

    void print_list() {
        if (!head) {
            std::cout << "Circular Linked List is empty" << std::endl;
            return;
        }
        Node* current = head;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        std::cout << "(Head)" << std::endl;
    }

    Node* get_head() {
        return head;
    }

    Node* get_tail() {
        return tail;
    }
};

int main() {
    // Create a circular linked list
    CircularLinkedList cll;

    // Append nodes
    cll.append(1);
    cll.append(2);
    cll.append(3);
    cll.append(4);
    cll.append(5);

    // Print the circular linked list
    cll.print_list();

    // Access head and tail
    Node* head = cll.get_head();
    Node* tail = cll.get_tail();
    std::cout << "Head: " << head->data << std::endl;
    std::cout << "Tail: " << tail->data << std::endl;

    return 0;
}

