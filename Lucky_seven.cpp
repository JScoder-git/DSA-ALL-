#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';
int cntbox[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

		int n, h, cpos = 0;

		bool nbox = 1;

		cin >> n >> h;

		for (int i = 0; i < n; ++i){
			cin >> cntbox[i];
		}
		int command = -1;
		while (command != 0)
		{
			cin >> command;
			if (command == 1)
			{
				if (cpos != 0)
					--cpos;
			}
			else if (command == 2)
			{
				if (cpos != n - 1)
					++cpos;
			}
			else if (command == 3)
			{
				if (nbox && cntbox[cpos] > 0)
					nbox = 0, --cntbox[cpos];
			}
			else if (command == 4)
			{
				if (nbox == 0 && cntbox[cpos] < h)
					nbox = 1, ++cntbox[cpos];
			}
		}
		for (int i = 0; i < n - 1; ++i)
			cout << cntbox[i] << " ";
			
			cout << cntbox[n - 1] << endl;
	return 0;
}

