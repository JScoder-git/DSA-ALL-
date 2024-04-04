#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode; 
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            newNode->next = head;
            head = newNode;
            current->next = head;
        }
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            newNode->next = newNode; 
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
            newNode->next = head;
        }
    }

    void deleteAtHead() {
        if (!head) {
            return;
        }
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        head = head->next;
        current->next = head;
        delete temp;
    }

    void deleteAtTail() {
        if (!head) {
            return;
        }
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }
        Node* current = head;
        Node* prev = nullptr;
        while (current->next != head) {
            prev = current;
            current = current->next;
        }
        prev->next = head;
        delete current;
    }

    void display() {
        if (!head) {
            return;
        }
        Node* current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
       cout << endl;
    }

    ~CircularLinkedList() {
        if (!head) {
            return;
        }
        Node* current = head;
        Node* nextNode = nullptr;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtHead(3);
    cll.insertAtTail(5);
    cll.insertAtHead(1);
    cll.display();

    cll.deleteAtHead();
    cll.deleteAtTail();
    cll.display();

    return 0;
}
