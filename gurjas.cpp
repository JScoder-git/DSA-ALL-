#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node* prev;

  // Node(int _data): data(_data), next(NULL), prev(NULL) {}

  Node(int _data) {
  this->data = _data;
  this->prev = NULL;
  this->next = NULL;
  }

  ~Node() {
  delete next;
  next = NULL;
  cout << "Node deleted\n";
  }
};

void insertAtHead(Node* head, int data) {

if(head == NULL) {
  Node* temp = new Node(data);
head = temp;
} else {
  Node* temp = new Node(data);
temp->next = head;
head->prev = temp;
head = temp;
}
}

void insertAtEnd(Node* head, int data) {
Node* temp = new Node(data);
if(head == NULL) {
head = temp;
return;
}
Node* cur = head;
while(cur->next != NULL) {
cur = cur->next;
}
cur->next = temp;
temp->prev = cur;
}

void deleteHead(Node* head) {
if(head == NULL) {
return;
}
head = head->next;
}

void deleteAtEnd(Node* head) {
if(head == NULL) {
return;
} else if(head->next == NULL) {
head = NULL;
return;
}
Node* cur = head;
while(head->next != NULL) {
cur = cur->next;
}
cur = cur->prev;
cur->next = NULL;
}

void printList(Node* head) {
Node* cur = head;
while(cur != NULL) {
cout << cur->data << " ";
cur = cur->next;
}
cout << endl;
}


int main() {

  #ifndef Sahil
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout);
  #endif
Node* head = NULL;

insertAtHead(head, 2);
insertAtHead(head, 1);

printList(head);
if(head == NULL){
  cout<<"yes";
}

// insertAtEnd(head, 3);
// insertAtEnd(head, 4);
// insertAtEnd(head, 5);

// printList(head);

// deleteHead(head);
// deleteHead(head);

// printList(head);

// deleteAtEnd(head);
// deleteAtEnd(head);
// deleteAtEnd(head);
// deleteAtEnd(head);

// printList(head);

return 0;
}