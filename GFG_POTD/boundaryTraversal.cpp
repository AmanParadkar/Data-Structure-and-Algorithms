#include<bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
{    
    vector<int> ans;
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1 ;
    
    if(n == 1)
    {
        for(int i = 0; i < m; i++)
            ans.push_back(matrix[0][i]);
    }
    else if(m == 1)
    {
        for(int i = 0; i < n; i++)
            ans.push_back(matrix[i][0]);
    }
    else
    {
        for(int i = col_start; i <= col_end; i++)
        {
            ans.push_back(matrix[row_start][i]);
        }
        row_start++;
        
        for(int i = row_start; i <= row_end; i++)
        {
            ans.push_back(matrix[i][col_end]);
        }
        col_end--;
        
        for(int i = col_end; i >= col_start; i--)
        {
            ans.push_back(matrix[row_end][i]);
        }
        row_end--;
        
        for(int i = row_end; i >= row_start; i--)
        {
            ans.push_back(matrix[i][col_start]);    
        }
        col_start++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15,16}};

    vector<int> ans = boundaryTraversal(matrix,4,4);
    for(int x : ans)
        cout<<x<<" ";
}