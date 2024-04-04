#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';



bool check_subset_sum(vector<int>& arr, int k) {
    int n = arr.size();
    bool dp[n][k+1];

    for(int i = 0; i < k+1; i++)
        dp[0][i] = false;
    dp[0][0] = true;
    dp[0][arr[0]] = true;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < k+1; j++) {
            if(dp[i-1][j] == true)
                dp[i][j] = true;
            else if(j-arr[i] >= 0 && dp[i-1][j-arr[i]] == true)
                dp[i][j] = true;
            else
                dp[i][j] = false;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k+1; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n-1][k];
}

int main() {
    vector<int> arr = { 2, 3, 7, 8, 10 };
    int k = 11;

    if (check_subset_sum(arr, k)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}