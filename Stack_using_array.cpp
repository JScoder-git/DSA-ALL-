#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';

class Stack{

	public: 
		int *arr;
		int top;
		int size;

Stack (int size){
	this -> size  = size;
	arr = new int[size];
	top = -1;
}

void push (int element){
	if(size -top > 1){
		top++;
		arr[top] = element;
	}
	else{
		cout<<"Stack Overflow"<<endl; 
	}
}

void pop(){
	if(top >= 0){
		top --;
	}
	else{
		cout<<"Stack  Underflow"<<endl;
	}
}

int peek(){
	if(top >= 0 )
	return arr[top];
	else{
		cout<<"Stack is empty"<<endl;
	}
}

int isEmpty(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}
};


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
		
	Stack st(5);
	st.push(43);
	st.push(45);
	st.push(44);
	st.push(41);
	st.push(47);
	
	cout<<st.peek()<<endl;
	return 0;
}