#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> powers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> powers[i];
    }
    
    sort(powers.begin(), powers.end());
    
    long long capPower = 0;  
    long long ironManPower = 0;  
    
    bool capTurn = true;  
    
    for (int i = n - 1; i >= 0; i--) {
        if (capTurn) {
            capPower += powers[i];
        } else {
            ironManPower += powers[i];
        }
        capTurn = !capTurn;  
    }
    
    long long powerDifference = capPower - ironManPower;
    
    cout << powerDifference << endl;
    
    return 0;
}
