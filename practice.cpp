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
	temp ->next = head;
	head = temp;
}

void print(node * &head){
    node* temp = head ;
    while(temp!= NULL){
        cout << temp -> data <<" ";
        temp = temp ->next;
        } 

    }


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif
	
	node* node1 = new node(10);
   	node* head = node1;
	insertathead(head,60);
    insertathead(head,70);
    print(head);




	return 0;
}