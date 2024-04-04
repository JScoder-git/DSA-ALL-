#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
vector<int> v1 ={1,2,3,4,5,6,7,8,9};

vector<int> v2 ={9,8,7,6,5,4,3,2,1};

vector<int> v3(5,3);

for(const int& i : v1){
      cout<<i<<" ";
}
for(const int& i : v2){
      cout<<i<<" ";
      
}

for(const int& i : v3){
      cout<<i<<" ";
} 
return 0 ; 
}