#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string y;
        cin>>y;
        int n = y.size();
        int f = y[0] - '0';
        int s = y[n - 1] - '0';
        cout << f + s << '\n';
    }
    return 0;
}




#include <bits/stdc++.h>

using namespace std;

int noOfDigit(int x) {
  int count = 0;
  while (x > 0) {
    x /= 10;
    count++;
  }
  return count - 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    int last = x % 10;
    int digits = noOfDigit(x);
    int first = x / pow(10, digits); // 10 raise to the power  digits.
    cout << first +  last << '\n';
  }
  return 0;
}