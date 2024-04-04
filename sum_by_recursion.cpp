#include <bits/stdc++.h>

using namespace std;

int sum (int arr[], int n){
if (n==0){
   return 0;
}
   if(n==1){
      return arr[0];
   }
   int remain = sum(arr+1,n-1);
   int s = arr[0]+remain;

  return s;

}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; ++i)
   {
      cin>>arr[i];
   }
   int ans = sum(arr,n);
   cout<<ans;
   return 0;
}