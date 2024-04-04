#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int bande = 0 ;
  int pass = 0;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    pass-=a;
    pass+=b;

    bande=max(bande,pass);
  }
  cout<<bande;

  return 0;
}