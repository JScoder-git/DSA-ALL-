#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v1{1,2,3,44,5,6,7,8};
	vector<int>::iterator i1;
 i1 = v1.begin();
  cout<<*i1;
 i1 = v1.end() -1 ;
 cout<<*i1;

for(i1=v1.begin(); i1!=v1.end(); ++i1){
	cout<<*i1<<" ";
}
	return 0;

}