#include <bits/stdc++.h>

using namespace std;

int main() {
  int n , k ;
  while(cin>>n>>k){
    for(int i = 1 ; i<=k;i++){
      if(n%10>0){
        n--;
      }
      else
        n=n/10;
    }
    cout<<n<<endl;
    n=0;
  }
  return 0;
}