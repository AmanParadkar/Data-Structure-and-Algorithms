#include<iostream>
using namespace std;

void InsertionSort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int x = A[i];
        int j = i-1;

        while(j>=0 && A[j] > x)
        {
            A[j+1]=A[j];
            j--;
        }
        j++;
        A[j]=x;
    }
}
int main()
{
    int A[] = {6,3,8,2,9,1,5,4,7};
    int n = sizeof(A)/sizeof(A[0]);
    InsertionSort(A,n);

    for(int x:A)
    {
        cout<<x<<" ";
    }



}