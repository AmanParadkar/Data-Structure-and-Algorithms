#include<iostream>
using namespace std;

int patrision(int A[],int low,int high)
{
    int pivot = A[high];
    int i = low-1;
    
    for(int j=low; j < high; j++)
    {
        if(A[j] < pivot)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    i++;
    swap(A[i],A[high]);
    return i;
}

void quickSort(int A[],int low,int high)
{
    if(low<high)
    {
        int j = patrision(A,low,high);
        quickSort(A,low,j-1);
        quickSort(A,j+1,high);
    }
}

int main()
{
    int A[] = {7,2,9,5,1,8,4,3,6};
    int low = 0;
    int high = sizeof(A)/sizeof(A[0]) -1;

    quickSort(A,low,high);

    for(int x : A)
    {
        cout<<x<<" ";
    }



}