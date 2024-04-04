#include <iostream>

using namespace std;

int main() {


int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		
		
		for(int j = 1;j<i;j++){
			cout<<char('a' + j - 1);}
		
		cout<<"\n";

	}

int y;
	y=x;
	for(int i = y;i>=1;i--){
	
		for(int j = 1;j<=i;j++){
			cout<<char('a' + j - 1);}
		
		cout<<"\n";

	}
	return 0;
}