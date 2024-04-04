#include <bits/stdc++.h>

using namespace std;
bool palidrome(string name,int i , int j){

  if(i>j){
    return true;
  }
  if(name[i]!=name[j]){
    return false;
  }
  else{
    return palidrome(name,i+1,j-1); 
  }

}


int main() {
  string name;
  cin>>name;
  int l = name.size();
  bool ans = palidrome( name,0,l-1);
  cout<<ans;
  return 0;
}