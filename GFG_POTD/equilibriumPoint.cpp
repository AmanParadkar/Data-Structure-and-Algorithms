/*Given an array A of n positive numbers. The task is to find the first equilibrium point in an array.
 Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. */
#include<iostream>
#include<vector>
using namespace std;

int equilibriumPoint(int a[], int n) {
    
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        
        if(sum==ans)
        return i+1;
        
        ans+=a[i];
    }
    return -1;
}
int main()
{
    int A[] = {1,3,5,2,2};

    cout<<equilibriumPoint(A,5);

}