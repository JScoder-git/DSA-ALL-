#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  set<int> s;
for(int i = 0;i<n;i++){
  int m;
  cin>>m;
  s.insert(m);
}
for(int k : s){
  cout<<k<<" ";
}
cout<<endl;
s.erase(s.begin());
for(int k : s){
  cout<<k<<" ";
}
  cout<<endl;
  s.erase(s.begin());
for(int k : s){



  
  cout<<k<<" ";
}
  cout<<endl;
s.erase(s.begin());
for(int k : s){
  cout<<k<<" ";
}

cout<<endl;
s.erase(s.begin());
for(int k : s){
  cout<<k<<" ";
}
cout<<endl;
cout<<s.count(65);
  return 0;
}