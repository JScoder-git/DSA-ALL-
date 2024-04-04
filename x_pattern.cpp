
#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main() 
{

   fastread();
    int i, j, p;
      
      int n;
      cin>> n;

      int x = 1;
      int y = n * 2 - 1;

      for (i = 1; i < n; i++)
      {
          for (j = 1; j <= n * 2; j++)
          {
              if (j == x || j == y)
              {
                  cout << i;
              }
              else
              {
                  cout << "  ";
              }
          }
          x++;
          y--;
          cout << "\n";
      }


      int o, c;
    
   
    


    int xx = n;
    int yy = n;
    for (o = n; o >= 1; o--)
    {
        for (i = 1; i <= n * 2; i++)
        {
            if (i == xx || i == yy )
            {
                cout << o;
            }

            else
            {
                cout << " ";
            }
        }
        xx--;
        yy++;
        cout << "\n";
    }


   return 0;
}