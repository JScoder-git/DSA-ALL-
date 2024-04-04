#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin>>n;
    string ans="";
   
    transform(n.begin(),n.end(),n.begin(),::tolower);

    for(int i = 0;n[i];i++)
    {
        if(n[i]!='a' && n[i]!='e' && n[i]!='i' && n[i]!='o' && n[i]!='u' && n[i]!='y')
        {
            ans += ".";
          ans += n[i];   
        }
    }
    cout<<ans;
    return 0;
}