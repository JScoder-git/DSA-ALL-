#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    string str = to_string(n);
    int s = 0;
    int e = str.size()-1;
    string s1 = "";
    vector<string> ss;
    while(s<=e){
        auto s1 = std::string(1,str[s])+str[e];
        cout<<s1<<endl;
        ss.push_back(s1);
        s++;
        e--;
        
    }
    int sum = 0;
    for(auto i = ss.begin(); i<ss.end(); i++){
    
    }
   
}

int main() {
    // Write C++ code here
    int n = 3069;
    cout<<solve(n);
return 0;
}