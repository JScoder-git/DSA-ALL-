#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int n,sum=0;
	cin>>n;
	int arr[n];

	for(int i = 0 ; i<n ;i++){
		cin>>arr[i];
	}
	for(int j = 0; j<n ; j++){
		sum+=arr[j];
	}
cout<<sum<<endl;
	return 0;
}