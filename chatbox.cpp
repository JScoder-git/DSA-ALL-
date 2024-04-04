#include <iostream>
using namespace std;
string a, b = "hello";
int j = 0, p = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            p++;
            
            if (p == 5) {
                break;
            }
        }
    }
    if (p == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}



/*#include <bits/stdc++.h>

using namespace std;

int main() {
    string g;
    cin>>g;
    int j = 0;
    string f = " ";
    for(int  i = 0;g[i];i++){
        if(g[i]=='h' || g[i]=='e' || g[i]=='l' || g[i]=='o'){
            f += g[i];
        }
    }
    cout<<f<<endl<<endl;
    unordered_map<char,int> s;

    string name;

        for(char c : f){
            if(!s[c])
                name.push_back(c);
            s[c]++;
        }
        cout<<name<<endl;                
        for(int i = 0;name[i];i++){
            if(name[i]=='h' && name [i+1]=='e' && name[i+2]=='l' && name[i+3]=='o'){
                j++;
            }
            else
            {}
        }
        cout<<j<<endl<<endl;
        if(j>0){
            cout<<"YES";
        }
        else
            cout<<"NO";

    return 0;
}*/