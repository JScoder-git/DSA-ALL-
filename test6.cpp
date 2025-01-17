//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
         vector<int> result;
            int right = 0;  
            int down = c-1; 
            int left = r-1; 
            int up = 0;     
            while(right<=left && up<=down)
            {
                for(int i=up;i<=down;i++)
                    result.push_back(matrix[right][i]);
                right++;

                for(int i=right;i<=left;i++)
                    result.push_back(matrix[i][down]);
                down--;

                if(right<=left)
                {
                    for(int i=down;i>=up;i--)
                    result.push_back(matrix[left][i]);
                }    
                left--;

                if(up<=down)
                {
                    for(int i=left;i>=right;i--)
                        result.push_back(matrix[i][up]);
                }        
                up++;
            }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends