#include <bits/stdc++.h>

using namespace std;

int main() {
  string name1;
  cin>>name1;
transform(name1.begin(),name1.end(),name1.begin(),::tolower);

string name;
cin>>name;
transform(name.begin(),name.end(),name.begin(),::tolower);

if(name1==name){
  cout<<"0";
}
else if(name1>name){
  cout<<"1";
}
else
  cout<<"-1";
 
  return 0;
}