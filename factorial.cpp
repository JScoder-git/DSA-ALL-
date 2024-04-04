#include <bits/stdc++.h>

using namespace std;

int main() {
	int  j;
	cin>>j;
	int i = j,f = 1;
	while(j/i != j){
		f = f*i;
		i--;
	}
	cout<<f;
	return 0;
}