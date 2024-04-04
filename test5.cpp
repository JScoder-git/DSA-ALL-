#include <bits/stdc++.h>

using namespace std;

int main() {

    cout<<"=====SAHIL SINGH-----21BCS2757====="<<endl<<endl;

    int n,i;
    cin>>n;
    cout<<"Enter No Of Elements :- "<<n<<endl;
    int arr[n+2];
    cout<<"Enter "<<n<<" Elements :- ";
    for ( i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    for (i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;


   
    int key1;
    cin>>key1;
     cout<<"Enter a Value To Be Inserted In The End Of Array :- "<<key1<<endl;
    arr[i]=key1;
    cout<<"After Inserting the Value :- ";
    for (int i = 0; i < n+1; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;


    int pos,key2;
    cin>>pos>>key2;
     cout<<"Enter a Position And Value Where to Insert value :- "<<pos<<" "<<key2<<endl;
     for (i = n - 1; i >= pos - 1; i--)
        {
        arr[i+1] = arr[i];
        }
        arr[pos-1] = key2;
    cout<<"After Inserting the Value at "<<pos<<" Position  :- ";
     for (int i = 0; i < n+1; ++i)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl<<endl;


     cout<<"Before Deleting The Last Element From The Array :- ";
     for (int i = 0; i < n; ++i)
     {
        cout<<arr[i]<<" "; 
     }
     cout<<endl;
     cout<<"After Deleting The Last Element From The Array  :- ";
     for (int i = 0; i < n-1; ++i)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl<<endl;


     cout<<"Before Deleting The Last Element From The Array :-  ";
     for (int i = 0; i < n; ++i)
     {
        cout<<arr[i]<<" "; 
     }
     cout<<endl;
     int key3;
     cin>>key3;
     cout<<"Enter the Element You Want To Delete :-  "<<key3<<endl;
     cout<<"After Deleting "<<key3<<" From the Array :-  ";
     for (int i = 0; i < n; ++i)
     {
         if(arr[i]==key3){
            continue;
         }
         else{
            cout<<arr[i]<<" ";
         }
     }
     cout<<endl<<endl;


     cout<<"Array To Find The Element :-  ";
      for (int i = 0; i < n; ++i)
     {
        cout<<arr[i]<<" "; 
     }
     cout<<endl;
     int key4;
     cin>>key4;
     cout<<"Enter The value To Find Its location :- "<<key4<<endl;
     for (int i = 0; i < n; ++i)
     {
         if(arr[i]==key4){
            cout<<i+1<<" Position";
         }
     }

    return 0;
}