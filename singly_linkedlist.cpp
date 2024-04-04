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

void insertathead(node* &head, int d){
	node* temp = new node(d);
	temp->next = head;
	head = temp;
}

void insertattail(node* &tail, int d){
	node* temp = new node(d);
	if (!tail) {
		tail = temp;
	} else {
		tail->next = temp;
		tail = temp;
	}
}

void deleteathead(node* &head){
	if (!head) {
		return;
	}
	node* temp = head; 
	head = head->next;
	delete temp;
}

void deleteattail(node* &head, node* &tail){
	if (!head) {
		return;
	}
	if (head == tail) {
		delete head;
		head = tail = NULL;
		return;
	}
	node* second_last = head;
	while(second_last->next != tail){
		second_last = second_last->next;
	}
	delete tail;
	tail = second_last;
	tail->next = NULL;
}

void display(node* head) {
	node* current = head;
	while(current != NULL){
		cout << current->data << " ";
		current = current->next;
	}
	cout << nl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	node* head = NULL;
	node* tail = NULL;

	insertathead(head, 3);
	insertathead(head, 5);
	insertathead(head, 1);
	insertathead(head, 7);
	insertathead(head, 6);
	deleteathead(head);
	deleteattail(head,tail);
	display(head);

	return 0;
}
