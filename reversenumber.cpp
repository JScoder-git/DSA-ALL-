#include <iostream>

using namespace std;

int main() 
{
    int n,lastnum,rev=0;
    cin>>n;

     while(n > 0)
    {
        lastnum = n%10;
        rev=rev*10+lastnum;
        n=n / 10;
    }

        cout<<rev<<endl;

    return 0;
}