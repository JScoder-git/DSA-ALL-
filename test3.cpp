#include <iostream>
using namespace std;

int solve(int l, int arr[], int p){
	int min = 1;
	int cnt = 0;
	while(cnt<l){
		for(int i = 0; i<l;i++){
			int n = (2*min)/(arr[i]+arr[i]*min);
			cnt += n;
			if(cnt>=p){
				return min;
			}
		}
		cnt = 0;
		min++;
	}
}

int main() {
	int t, l, p;
	
	cin>>t;
	for(int i = t;i>0;i++){
		cin>>p;
		cin>>l;
		int arr[l];
		for(int j = 0; j<l; j++){
			cin>>arr[i];
		}
		cout<<solve(l, arr, p);
	}
	return 0;
}