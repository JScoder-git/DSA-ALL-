#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
    int n;
    cin>>n;
    queue<int> q;

     for(int i = 0; i<n;i++){
        int k;
        cin>>k;
        q.push(k);
     }
for (int j =0;j<n;j++){
    cout<<q.front()<<" ";
    q.pop();
 }
    
    return 0;
}





/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
   while(m--){
    for(int i = 0;i<n;i++)
    {
        if(s[i]=='G' && s[i-1]=='B'){
            s[i]='B';
            s[i-1]='G';
            i++;
        }
    }
   }
    cout<<s;


    return 0;
} */