#include <bits/stdc++.h>

using namespace std;

int main() {
  string name;
  cin>>name;
  int count = 0;

  int size = name.size();
  int midpoint = size/2; 
  for(int i = 0;i<midpoint;i++)
  {
   if(name[i]==name[size-(i+1)]){
    count++;
  }
  }
 if(count>=midpoint){
  cout<<"YES";
 }
 else
  cout<<"NO";
  return 0;
}