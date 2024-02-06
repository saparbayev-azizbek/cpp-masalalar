#include <iostream>

// Node structure for the circular list
struct Node {
    std::string data;
    Node* next;

    // Constructor
    Node(std::string value) : data(value), next(nullptr) {}
};

// Circular List class
class CircularList {
private:
    Node* head;

public:
    // Constructor
    CircularList() : head(nullptr) {}

    // Function to add a new node to the circular list
    void addNode(std::string value) {
        Node* newNode = new Node(value);

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        }
        else {
            // Traverse to the last node and connect it with the new node
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Function to display the circular list
    void displayList() {
        if (head == nullptr) {
            std::cout << "Circular list is empty." << std::endl;
            return;
        }

        Node* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        std::cout << std::endl;
    }
};

int main() {
    CircularList myList;

    // Adding nodes to the circular list
    myList.addNode("Alice");
    myList.addNode("Bob");
    myList.addNode("Charlie");
    myList.addNode("David");

    // Displaying the circular list
    myList.displayList();

    return 0;
}


