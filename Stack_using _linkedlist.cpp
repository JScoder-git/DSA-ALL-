#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';


	struct Node
	{
		int val;
		Node* next;
	};

	class mystack
	{
		Node* head;
		int stacksize;
	public:

	mystack()
	{
		head=NULL;
		stacksize=0;
	}

	void push(int g)
	{
		Node* temp= new Node();
		temp->val=g;
		temp->next=head;
		head=temp;

		cout<<"Element "<<g<<" pushed into the stack!"<<endl;
		stacksize++;
	}

	void pop()
	{
		if(head==NULL)
		{
		cout<<"Stack is Empty! Cannot POP an Element!"<<endl;
		return;
	}

		Node* temp=head;
		head=temp->next;
		temp->next=NULL;
		delete temp;
		cout<<"Element Popped!"<<endl;
		stacksize--;
	}

	int top()
	{
		if(head==NULL)
		{
		cout<<"NO TOP ELEMENT! Stack is empty!"<<endl;
		return -1;
		}

		cout<<"Top Element is: "<<head->val<<endl;
		return head->val;
	}

	int size()
	{
		cout<<"Size of Stack is: "<<stacksize<<endl;
		return stacksize;
	}

	int empty()
	{
		if(head==NULL)
		{
		cout<<"Stack is Empty!"<<endl;
		return 1;

	}

		cout<<"Stack is NOT EMPTY!"<<endl;
		return 0;
	}
	};



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	mystack s1;

	s1.empty();

	s1.push(7);

	s1.push(9);

	s1.pop();

	s1.push(10);

	s1.top();

	s1.size();

	s1.empty();

	return 0;
}