#include<iostream>
using namespace std;

void SelectionSort(int A[],int n)
{
    int i=0;
    int j,k;

    while(i<n)
    {
        j=k=i;

        while(k < n)
        {
            if(A[k]<A[j])
                j=k;
            k++;
        }
        swap(A[j],A[i]);
        i++;
    }
}
int main()
{
    int A[] ={6,7,2,9,8,3,1,4,5};
    int n = sizeof(A)/sizeof(A[0]);
    SelectionSort(A,n);

    for(int x : A)
    {
        cout<<x<<" ";
    }

}