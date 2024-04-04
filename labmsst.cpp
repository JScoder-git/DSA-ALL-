#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
    }

};

void insertNode(Node* &tail, int element, int d) {
    
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* tail) {

    Node* temp = tail;
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void printevenlist(Node* tail){


     if(tail == NULL) {
        cout << "List is empty, please check again" << endl;
        return;
    }
    else{
        Node* curr = tail -> next;
        do {
            if(curr -> data % 2 != 0) {
                cout << curr -> data << " ";
            }
            curr = curr -> next;
        } while(curr != tail -> next);
    }

} 

void deleteEvenNodes(Node* &tail) {
    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        do {
            if(curr -> data % 2 == 0) {
                prev -> next = curr -> next;    
                if(curr == prev) {
                    tail = NULL;
                }
                else if(tail == curr ) {
                    tail = prev;
                }
                Node* temp = curr;
                curr = curr -> next;
                temp -> next = NULL;
                delete temp;
            } else {
                prev = curr;
                curr = curr -> next;
            }
        } while(curr != tail -> next);
    }
}




int main() {

    Node* tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9); 
    insertNode(tail, 9, 10);
    insertNode(tail, 10, 4);
    insertNode(tail, 4, 5);
    print(tail);
    printevenlist(tail);

    return 0;
}
