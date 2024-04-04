#include <iostream>

using namespace std;

int main() {


int x;
	cin>>x;
	for(int i = 0;i<=x;i++){
		
		
		for(int j = 0;j<i;j++){
			cout<<char('A'-1 + i);}
		
		cout<<"\n";

	}

int y;
	y=x;
	for(int i = y;i>=0;i--){
	
		for(int j = 0;j<=i;j++){
			cout<<char('A'-1 + i);}
		
		cout<<"\n";

	}
	return 0;
}