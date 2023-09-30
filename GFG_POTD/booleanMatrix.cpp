#include<iostream>
#include<vector>
using namespace std;

 void booleanMatrix(vector<vector<int> > &matrix)
{
    
    int row = matrix.size();
    int col = matrix[0].size();
    int rowCol = 0;
    
    for(int i = 0; i < row; i++)
    {
        for(int j =0; j < col; j++)
        {
            if(matrix[i][j] == 1)
            {
                if(j != 0)
                    matrix[0][j] = 1;
                else
                    rowCol = 1;
                
                matrix[i][0] = 1;
                
            }
        }
    }

    for(int i = 1; i < row; i++)
    {
        for(int j =1; j < col; j++)
        {
            if(matrix[i][j] == 0)
            {
                if(matrix[i][0] == 1 || matrix[0][j] == 1)
                    matrix[i][j] = 1;
            }
        }
    }
    
    
    if(matrix[0][0] ==1)
    {
        for(int i = 0; i < col ; i++)
            matrix[0][i] = 1;
        
    }
    
    if(rowCol ==1)
    {
        for(int i = 0; i < row ; i++)
            matrix[i][0] = 1;
        
    }
    
}

int main()
{
    vector<vector<int>> matrix   = {{ 1, 0, 0},
                                    { 1, 0, 0},
                                    { 1, 0, 0},
                                    { 0, 0, 0}};

    booleanMatrix(matrix);

    for(vector<int> temp : matrix)
    {
        for(int x: temp)
            cout<<x<<" ";
        cout<<endl;
    }

}