#include <iostream>

using namespace std;

int main() {
	int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		
		for(int j = 1;j<=x;j++){

			if(j<=i){
			cout<<j;}
			else
			cout<<" ";
		}
		for(int j = x;j>=1;j--){
			if(j<=i)
				cout<<j;
			else
				cout<<" ";
			
		}
		cout<<"\n";
	}
	return 0;
}
