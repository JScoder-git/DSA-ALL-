#include <bits/stdc++.h>
#include <vector>
#include <algorithm> 
using namespace std;

class demo{
public:

  void display(){

  int n;
  cin>>n;
  vector<int> v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});

  }

};

int main() {
  demo obj;
  obj.display();
  
  
  return 0;
}