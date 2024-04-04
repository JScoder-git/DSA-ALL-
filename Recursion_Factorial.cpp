#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  int c = factorial(n-1);
  int b = n*c;

  return b; 


} 

int main() {
  int n;
  cin>>n;  
  int ans = factorial(n);
  cout<<ans<<endl;

  return 0;
}