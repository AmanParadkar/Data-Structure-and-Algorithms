#include<iostream>
using namespace std;


// giving array of integer containg duplicate number except one number
// return the number whose lies only one's in array
int unique(int A[],int n)
{
    int ans = 0;

    for(int i=0; i<n; i++)
    {
        ans = ans ^ A[i];
    }
    return ans;
}

int main()
{
    int A[] = {2,3,4,5,6,7,6,5,4,3,2};
    cout<<unique(A,11);

}