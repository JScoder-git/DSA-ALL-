#include <iostream>

using namespace std;

class p 
{
public:
    void display()
    {
            int m=1;
            for(int k = 0;k<m;k++)
        {
            int n;
            cin>>n;
            cout<<"No of members : "<<n<<endl;
            int arr[n];
            for(int i = 0;i<n;i++)
            {
                cin>>arr[i];
            }

            for(int j = 0;j<n;j++)
            {
                cout<<arr[j]<<" ";
                if(arr[0]<arr[j])
                    arr[0]=arr[j];
            }
    cout<<"\neldest age :"<<arr[0]<<endl<<endl;
    
        }
    }
};

int main() {
  
    p obj;
   
    char op = 'y';
    while(op=='y'){
        obj.display();
        cout << "do you want to do it again : y/n\n";
        cin >> op;
    }
    return 0;
}