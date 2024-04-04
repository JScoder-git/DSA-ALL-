#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';


class node{

public:
	int data;
	node* next;


	node(int d){
		this->data = d;
		this->next = NULL;
	}
};

class LinkedList{
private:
	node* head;
	node* tail;
public: 
	LinkedList(){
		this->head = NULL;
		this->tail = NULL;
	}



	void InsertAtHead(int d){
		node* temp = new node(d);
		temp->next = head;
		head = temp;
	}
	void InsertAtTail(int d){
		node* temp = new node(d);
		if(!tail){
			head = temp;
			tail = tail;
		}
		else{
			tail->next = temp;
			tail = temp;
		}
	}
	
	int DeleteAtHead(int d){
		if(!head){
			return -1;
		}
		else{
			int data = head->data;
			node* temp = head;
			head = head->next;
			delete temp;
			return data;
		}
	}
	int DeleteAtTail(int d){
		if(!tail){
			return -1;
		}
		int data;
		if(head == tail){
			data = head->data;
			delete head;
			head = tail = NULL;
		}
		else{
			node* temp = head;
			while(temp->next = NULL){
				temp = temp->next;
			}
			data = tail->data;
			delete tail;
			tail = temp;
			tail->next = NULL;
		}
		return data;
	}

	void display(){
		node* temp = head;
		while(temp){
			cout<<temp->data<<" ";
			temp = temp->next;
		}
		cout<<endl;
	}
	~LinkedList(){
		node* temp = head;
		while(temp){
			node* curr = temp;
			temp = temp->next;
			delete curr;
		}
	}
};




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	LinkedList list;
	list.InsertAtHead(3);

	list.display();





	return 0;
}