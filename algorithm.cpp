#include <bits/stdc++.h>

#include <algorithm>

#include <vector>

using namespace std;

int main()
{
  int n;
  cin>>n;

  vector<int> v;

  for(int i = 0 ;i<n ;i++){
    int num;
    cin>>num;
    v.push_back(num);
  }


cout<<binary_search(v.begin(),v.end(),8)<<endl;


cout<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;
cout<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;

int a = 5,b = 3;

cout<<"Maximum Number between a and b : "<<max(a,b)<<endl;
cout<<"Minimum Number between a and b : "<<min(a,b)<<endl;


swap(a,b);

cout<<"After swaping a will be : "<<a<<endl;
cout<<"After swaping b will be : "<<b<<endl;


string alpha;
cin>>alpha;
cout<<"string before reverse : "<<alpha<<endl;
reverse(alpha.begin(),alpha.end());

cout<<"string after reverse : "<<alpha<<endl;

rotate(v.begin(),v.begin()+3,v.end());
cout<<"After rotate : "<<endl;

for(int i :v){
  cout<<i<<" ";
}
sort(v.begin(),v.end());
cout<<"\nAter sorting : "<<endl;
for(int i : v){
  cout<<i<<" ";
}

  return 0;
}