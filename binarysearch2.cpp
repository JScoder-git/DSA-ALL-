#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';

int binarySearch(vector<int>&v,int key){
	int start = 0,end = v.size();

	while(start<=end){
		int mid = start+(end-start)/2;
		if(v[mid] == key){
			return mid;
		}
		else if(v[mid] > key){
			 end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}


int recursivebinarySearch(vector<int>&v,int key,int start,int end){
	int mid = start +(end-start)/2;

	if(v[mid] == key){
		return mid;
	}
	else if(v[mid]>key){
		return recursivebinarySearch(v,key,start,mid-1);
	}
	else{
		return recursivebinarySearch(v,key,mid+1,end);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}	

	int key;
	cin>>key;
	int ans = binarySearch(v,key);

	if(ans == -1){
		cout<<"We are unable to find the element"<<endl;
	}
	else{
		cout<<"We find the element at index "<<ans+1<<endl;
	}
	int ans2 = recursivebinarySearch(v,key,0,n);

	if(ans2 == 0){
		cout<<"We are unable to find the element using recursion "<<endl;
	}
	else{
		cout<<"We find the elemnt on the index "<<ans2+1<<endl;
	}

	return 0;
}