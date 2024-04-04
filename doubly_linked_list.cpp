#include<bits/stdc++.h>
using namespace std;


class node{
public:
		int data;
		node* next;
		node* prev;

		node(int d){

			this->data = d;
			this->next = NULL;
			this->prev = NULL;	
		}

};


void print(node* head){
	node* temp = head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void insertathead(node* &head,node* &tail,int d){
	if(head == NULL){
		node* temp = new node(d);
		head = temp;
		tail = temp;
	}
	else{
		node* temp = new node(d);
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

void insertattail(node* &head,node* &tail,int d){
	if(tail == NULL){
		node* temp = new node(d);
		head = temp;
		tail = temp;
	}
	else{
		node* temp = new node(d);
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}

void deleteathead(node* &head, node* &tail) {
    if (head == NULL) {
        return;
    } else if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
    } else {
        node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
}

void deleteattail(node* &head, node* &tail) {
    if (tail == NULL) {
        return;
    } else if (head == tail) {
        delete tail;
        head = NULL;
        tail = NULL;
    } else {
        node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
}

int main() {
	

	#ifndef Sahil
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	
   node* head =NULL;
   node* tail =NULL;
 
  

   insertathead(head,tail,11);
   insertathead(head,tail,43);
   insertathead(head,tail,99);
   insertathead(head,tail,68);
   insertathead(head,tail,88);
   insertathead(head,tail,83);
   insertattail(head,tail,44);
   insertathead(head,tail,22);
   deleteathead(head,tail);
   deleteattail(head,tail);
   print(head);
  

	

	return 0;
}