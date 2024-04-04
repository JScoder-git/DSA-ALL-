#include <bits/stdc++.h>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtHead(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (!tail) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int deleteAtHead() {
        if (!head) {
            return -1; 
        }
        int data = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return data;
    }

    int deleteAtTail() {
        if (!head) {
            return -1; 
        }
        int data;
        if (head == tail) {
            data = head->data;
            delete head;
            head = tail = nullptr;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            data = tail->data;
            delete tail;
            tail = current;
            tail->next = nullptr;
        }
        return data;
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.insertAtHead(3);
    list.insertAtTail(5);
    list.insertAtHead(1);
    list.insertAtHead(7);
    list.insertAtHead(9);
    list.insertAtHead(6);
    list.display();
    list.deleteAtHead();
    list.deleteAtTail();
    list.display();
    
    return 0;
}
