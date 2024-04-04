#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {
  array<int> a;
  

  
  for(int i = 0;;i++){
    cout<<a[i]<<" ";
  }

  cout<<"\n"<<a.at(3)<<endl;
  cout<<a.empty()<<endl;
  cout<<a.front()<<" "<<a.back()<<endl;
  cout<<*min_element(a.start(),a.end());
  return 0;
}