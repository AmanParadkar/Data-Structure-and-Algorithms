#include<iostream>
using namespace std;

void subSet(int A[],int n)
{
    for(int i=0; i<(1<<n) ;i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i & (1<<j))
                cout<<A[j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n = 4;
    int A[]= {1,2,3,4};
    subSet(A,n);

}