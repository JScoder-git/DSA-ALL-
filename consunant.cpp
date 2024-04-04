#include <bits/stdc++.h>

using namespace std;

int main() {
  string name;
  int count = 0;
  cin>>name;

  transform(name.begin(),name.end(),name.begin(),::tolower);

  for(int i = 0;name[i];i++){
    if(name[i]!='a' && name[i]!= 'e' && name[i]!= 'i' && name[i]!= 'o' && name[i]!= 'u'){
      count++;
    }
    else {}
  }
  if(count>0){
    cout<<count;
  }

  return 0;
}