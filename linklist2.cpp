#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

class node{

public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void insertattail (node * &tail ,int d){

    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void insertathead (node * &head ,int d){

    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertatpos(node* & tail,node* &head,int pos , int d){

if( pos == 1 ){
    insertathead(head,d);
    return;
}




node* temp = head;
int cnt = 1;

while(cnt < pos - 1){
    temp = temp-> next;
    cnt++;

}
if( temp-> next ==NULL){
    insertattail(tail,d);
    return ;
}

node * nodeti = new node(d);

nodeti -> next =  temp-> next;
temp-> next = nodeti; 

}

void deletenode(int pos, node* &head){

    if(pos == 1){
        node* temp = head; 
        head = head -> next;
        temp ->next =NULL;
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
        prev ->next =curr->next;
        delete curr;
    }

}

void print(node * &head){
    node* temp = head ;
    while(temp!= NULL){
        cout << temp -> data <<" ";
        temp = temp ->next;
        } 

    }

int searchNode(struct node *head, int key)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == key)
            return 1;
        temp = temp->next;
    }
    return -1;

}


int main() 
{

   fastread();
   node* node1 = new node(10);

   node* head = node1;
   node* tail = node1;
        
    insertattail(tail,20);
    insertattail(tail,30);
    insertattail(tail,40);
    insertathead(head,60);
    insertathead(head,70);
    insertatpos(tail,head,7,80);
    
    deletenode(7,head);
   
    print(head);
    cout<<endl;
    if(searchNode(head,20) == 1)
         cout<<"Search Found\n";
     else
         cout<<"Search Not Found\n";
    

    return 0;
}