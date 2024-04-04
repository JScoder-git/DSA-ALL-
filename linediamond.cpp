#include <iostream>

using namespace std;

int main() {
	int x;
	cin>>x;
	for(int i = 0;i<=x;i++){
		for(int j = x;j>=0;j--){
			if(j==i)
				cout<<j;
			else
				cout<<" ";
		}
		for(int j = 1;j<=i;j++){
			if(j==i)
				cout<<j;
			else
				cout<<" ";
		}
		cout<<endl;
	}

	int y;
	y = x;
	for(int i=x-1;i>=0;i--){
		for(int j = x;j>=0;j--){
			if(j==i)
				cout<<j;
			else
				cout<<" ";
		}
		for(int j = 1;j<=x;j++){
			if(j==i)
				cout<<j;
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}