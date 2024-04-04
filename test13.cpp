//insertion sort


#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,coumt = 0;
	cin>>n;
	int arr[n];
	int i, key, j; 
	for ( i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        
        while (j >= 0 && arr[j] > key)
        { 
             coumt++;
            arr[j + 1] = arr[j]; 
            j = j - 1; 
           
        } 
        arr[j + 1] = key; 
    } 

    cout<<coumt ;
	return 0;
}