#include <bits/stdc++.h>

using namespace std;

void sahil(int n)
{
	bool  x = true;
	if(n == 0 || n == 1)
	{
		x = false;
	}

	for( long long int  i = 2 ; i*i <= n ; i++)
	{
		if(n % i == 0)
		{
			
			x = false;
			break;
		}

	}
   if(x==true){
  cout<<"true"<<endl;
   }
   else
   	cout<<"false"<<endl;
}

int main()
{
	long long int  n;
	
	cin>>n;
	
	sahil(n);
	return 0;
}