#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    vector<int> v;
    for( int i = 0;i<t;i++){
        int j;
        cin>>j;
        v.push_back(j);
    }
    int k;
    cin>>k;
    for(int i = 0;i<k;i++){
        int s;
        cin>>s;
        vector<int>::iterator it;
        it = find(v.begin(),v.end(),s);
        if(it!=v.end())
        {
        cout<<"Yes "<<lower_bound(v.begin(),v.end(),s)-v.begin()+1<<endl;
        }
        else
         cout<<"No "<<lower_bound(v.begin(),v.end(),s)-v.begin()+1<<endl;
    }
    
    return 0;
}