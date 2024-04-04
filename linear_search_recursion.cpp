#include <bits/stdc++.h>

using namespace std;
bool find(int arr[],int n,int k){
  if(n == 0){
   return false;
  }
  if(arr[0]==k){
    return true;
  }
  else{
    bool r = find(arr+1,n-1,k);
    return r;
  }

}


int main() {
  int n,k;
  cin>>n>>k;
  int arr[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>arr[i];
  }
  bool ans = find(arr,n,k);
  cout<<ans;
  return 0;
}