#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

class node {

public:
	int data;
	node* prev;
	node* next;


	node(int d){
		this -> next =NULL;
		this -> prev =NULL;
		this -> data =d;

	}

};


void print(node* &head){
	node* temp = head;

	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp = temp-> next;
	}
	cout<<endl;
}

int getlength(node* &head){
	int l = 0;
	node* temp = head;
	
	while(temp!= NULL){
		l++;
		temp = temp-> next;
	}

	return l;
}

void insertathead (node * &head,node* &tail,int d){
	if(head == NULL){
		node * temp = new node(d);
		head = temp;
		tail = temp;
	}
	else{
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
}


void insertattail(node * &tail, node* &head,int d ){
	if(tail==NULL){
			node * temp =new node(d);
				tail = temp;
				head = temp;
	}
	else{
	node * temp =new node(d);
	tail-> next = temp;
	temp-> prev = tail;
	tail = temp;
}
}

void insertatpos(node * &head,node* &tail,int pos,int d){

	if(pos == 1){
		insertathead(head,tail,d);
		return;
	}
	
	node* temp = head;
		int cnt = 1;

		while(cnt < pos - 1){
		    temp = temp-> next;
		    cnt++;

		}
	node * nodetoinsert = new node(d);
	nodetoinsert -> next = temp -> next;
	temp->next->prev = nodetoinsert;
	temp->next =nodetoinsert;
	nodetoinsert ->prev = temp;

	if( temp-> next ==NULL){
    insertattail(tail,tail,d);
    return ;
	}
}

void deletenode(int pos, node* &head){

    if(pos == 1){
        node* temp = head; 
       temp->next->prev= NULL;
       head = temp-> next;
       temp->next = NULL;

        delete temp;
    }
    else{
        node* curr  = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt< pos){
            prev = curr;
            curr = curr-> next;
            cnt++;


        }
        curr-> prev = NULL;
        prev-> next = curr-> next;
        curr -> next = NULL;
        delete curr;
    }

}
int main() 
{

   fastread();
   
   node* head =NULL;
   node* tail =NULL;
 
  

   insertathead(head,tail,11);
   insertathead(head,tail,43);
   insertathead(head,tail,99);
   insertathead(head,tail,68);
   insertathead(head,tail,88);
   insertathead(head,tail,83);
   print(head);
   cout<<getlength(head)<<endl;
	insertatpos(head,tail,2,33);
	deletenode(4,head);
	print(head);
	return 0;
}