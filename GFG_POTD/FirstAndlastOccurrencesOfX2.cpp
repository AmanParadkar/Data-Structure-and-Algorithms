#include<iostream>
#include<vector>
using namespace std;

int findFirstOccurrence(int A[],int n,int x)
{
    int i=0;
    int j=n-1;
    int ans=-1;
    int mid=i+(j-i)/2;
    
    while(i<=j)
    {
        int mid_ele=A[mid];
        
        if(A[mid]==x)
        {
            ans=mid;
            j=mid-1;
        }
        else if(A[mid]>x)
            j=mid-1;
        
        else
            i=mid+1;
        
        mid=i+(j-i)/2;
    }
    return ans;
}

int findLastOccurrence(int A[],int n,int x)
{
    int i=0;
    int j=n-1;
    int ans=-1;
    int mid=i+(j-i)/2;
    
    while(i<=j)
    {
        int mid_ele=A[mid];
        
        if(A[mid]==x)
        {
            ans=mid;
            i=mid+1;
            
        }
        else if(A[mid]>x)
            j=mid-1;

        else        
            i=mid+1;
 
        mid=i+(j-i)/2;
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> V;
    int f=-1;
    int l=-1;
    
    
    f=findFirstOccurrence(arr,n,x);
    l=findLastOccurrence(arr,n,x);

    V.push_back(f);
    V.push_back(l);

    return V;
}

int main()
{
    int n=9, x=5;
    int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };

    vector<int> ans = find(arr,n,x);

    cout<<ans[0]<<" "<<ans[1]<<endl;
}
