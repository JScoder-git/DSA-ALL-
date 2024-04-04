#include <bits/stdc++.h>

using namespace std;

long long gcd(long long int a,long long int b){
	int result = min(a, b); 
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}
	return result; 
}

long long lcm(int a,int b){
	return(a/gcd(a,b))*b;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<"Lcm Of "<<a<<" "<<b<<" is :- "<<lcm(a,b);

	 

	return 0;
}