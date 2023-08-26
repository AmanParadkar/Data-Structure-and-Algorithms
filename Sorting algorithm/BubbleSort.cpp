#include<iostream>
using namespace std;

void bubbleSort(int A[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1])
            swap(A[j],A[j+1]); 
        }
    }
}
int main()
{
    int A[]={7,5,1,2,9,3,4};
    int n = sizeof(A)/sizeof(A[0]);

    bubbleSort(A,n);
    for(int x: A)
    {
        cout<<x<<" ";
    }
}