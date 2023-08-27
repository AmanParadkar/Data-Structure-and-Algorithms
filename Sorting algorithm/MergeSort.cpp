#include<iostream>
using namespace std;

void merge(int A[],int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int B[high+1];
    int k =0;

    while(i <= mid && j <= high)
    {
        if(A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    } 

    while(i <= mid)
    {
        B[k++] = A[i++];
    }

    while(j <= high)
    {
        B[k++] = A[j++];
    }

    k =0;

    for(int i = low; i <= high; i++)
    {
        A[i] = B[k++];
    }
}

void mergeSort(int A[], int low, int high)
{
    if(low == high)
        return;
    
    int mid = (low+high)/2;
    mergeSort(A,low,mid);
    mergeSort(A,mid+1,high);
    merge(A,low,mid,high);
    

}
int main()
{
    int A[] ={6,7,2,9,8,3,1,4,5};
    int n = sizeof(A)/sizeof(A[0]);
    
    mergeSort(A,0,n-1);

    for(int x : A)
    {
        cout<<x<<" ";
    }

}