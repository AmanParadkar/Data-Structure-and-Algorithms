#include<iostream>
using namespace std;
// 1 based indexing
void heapify(int A[],int n, int i)
{
    int largest = i;
    int leftChid = i*2;
    int rightChild = i*2+1;

    if(leftChid <= n && A[leftChid] > A[largest])
        largest = leftChid;
    if(rightChild <= n && A[rightChild] > A[largest])
        largest = rightChild;

    if(i!=largest)
    {
        swap(A[i],A[largest]);
        heapify(A,n,largest);
    }
}

void heapSort(int A[],int n)
{
    int i=1;
    int size = n;

    while(i<size)
    {
        swap(A[i],A[size]);
        size--;
        heapify(A,size,i);
    }

}

int main()
{
   
    int A[]  = {-1,9,5,2,1,10,16,8,3,91,4};
    int n = 10;

    for(int i=n/2; i>0; i--)
    {
        heapify(A,n,i);
    }
    heapSort(A,n);
    for(int i=1;i<=n;i++)
    {
        cout<<A[i]<<" ";
    }
}