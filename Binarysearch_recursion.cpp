#include <bits/stdc++.h>

using namespace std;
bool binary_saerch(int arr[],int s,int e,int k){
    int mid = s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binary_saerch(arr,mid+1,e,k);
    }
    else{
         return binary_saerch(arr,s,mid-1,k);
    }
}
int main() {
    int n,k,s,e;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    bool ans = binary_saerch(arr,0,n-1,k);
    cout<<ans;
    return 0;
}