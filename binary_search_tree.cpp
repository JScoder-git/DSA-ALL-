#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

class node{
public:

	int data;
	node* left;
	node* right;

	node(int d){
		this ->data = d;
		this -> left = NULL;
		this -> right= NULL;


	}


};
void levelordertransversal(node * root){
	queue<node*> q;
	q.push(root);

	q.push(NULL);
	while(!q.empty()){
		node * temp = q.front();
      
		q.pop();


		if(temp == NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			 cout<<temp-> data<<" ";   
				if(temp -> left ){
			q.push(temp-> left);
		}
		if(temp -> right){
			q.push(temp-> right);
		}
		}
	
	}

}

node* insertintoBST(node* root,int d){

	if(root == NULL){
		root = new node(d);
		return root;
	}

	if(d > root-> data){
		root-> right = insertintoBST(root-> right,d);

	}
	else{
		root ->left = insertintoBST(root-> left ,d);	
	}

 return root;
}


void takeinput(node* &root){
	int data;
	cin>>data;
	while(data != -1){
		root = insertintoBST(root, data);
		cin>>data;
	}

}
bool searchinBST(node* root ,int x){
	if (root == NULL){
		return false;
	}
	if(root->data == x){
		return true;
	}
	if(root->data > x){
		return searchinBST(root->left,x);
	}
	else{
		return searchinBST(root->right,x);
	}

}
node* minval(node* root){
	node * temp = root;
	while(temp -> left != NULL){
		temp = temp->left;
	}
	return temp;
}

node* maxval(node* root){
	node * temp = root;
	while(temp -> right != NULL){
		temp = temp->right;
	}
	return temp;
}
int main() 
{

   fastread();
	node *root =NULL;
	takeinput(root);
	levelordertransversal(root);
	bool ans = searchinBST(root,21);
	cout<<"Element is present or not =  "<<ans<<endl;

	cout<<"Minimum value in the BST "<<minval(root)->data<<endl;
	cout<<"Maximum value in the BST "<< maxval(root)->data<<endl;

	return 0;
}