#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll tt;
	cin>>tt;
	while(tt--) {
         
		int a,b,c,sum = 0;
		cin>>a>>b>>c;
		int arr[a];
		for (int i = 0; i < a; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+a);
		reverse(arr,arr+a);
		
		
			for (int i = c-1; i < a; i++)
			{
				sum+=arr[i];
				i+=b-1;

			}

		
		cout<<sum;
		cout<<endl;



	}

	return 0;
}