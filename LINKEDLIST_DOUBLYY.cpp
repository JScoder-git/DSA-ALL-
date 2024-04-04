#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int d) {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList {
private:
    node* head;
    node* tail;

public:
    DoublyLinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }

    void InsertAtHead(int d) {
        node* temp = new node(d);
        if (head == NULL) {
            head = tail = temp;
        }
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    void InsertAtTail(int d) {
        node* temp = new node(d);
        if (tail == NULL) {
            head = tail = temp;
        }
        else {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    void DeleteAtHead() {
        if (head == NULL) {
            return;
        }

        node* temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }
        else {
            tail = NULL;
        }

        delete temp;
    }

    void DeleteAtTail() {
        if (tail == NULL) {
            return;
        }

        node* temp = tail;
        tail = tail->prev;

        if (tail != NULL) {
            tail->next = NULL;
        }
        else {
            head = NULL;
        }

        delete temp;
    }

    void display() {
        node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    DoublyLinkedList dll;
    dll.InsertAtHead(5);
    dll.InsertAtHead(7);
    dll.InsertAtHead(6);
    dll.InsertAtHead(2);
    dll.InsertAtHead(3);
    dll.InsertAtHead(4);

    dll.display();
    dll.DeleteAtHead();
    dll.DeleteAtTail();
    dll.display();

    return 0;
}
