#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
  {
   for(int i=0;i<t;i++)
   {
      int x,count=0;
      cin>>x;
        while(x!=0)
        {
            if(x%10==4)
              count++;
            x=x/10;
        }
        cout<<count<<endl;
    }  
  }
  return 0;
}