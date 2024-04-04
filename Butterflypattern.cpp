#include <iostream>

using namespace std;

int main() {
	int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		for(int j = 1;j<=i;j++)
		{if(j<=x)

	 cout<<"*";
	 else
	 	cout<<"  ";
		}
		for(int j=x;j>=0;j--){
			if(j<i)
				cout<<"*";
			else
				cout<<"  ";
		}

		cout<<"\n";
	}
	int y;
	y=x;
	for(int i=x;i>=0;i--){
		for(int j = 0;j<=i;j++){
			if(j<=x)
			cout<<"*";
			else
				cout<<" ";
		}
		for(int j=x;j>=0;j--)
			if(j<=i)
				cout<<"*";
				else
				cout<<"  ";		

		cout<<"\n";
	}
	return 0;
}