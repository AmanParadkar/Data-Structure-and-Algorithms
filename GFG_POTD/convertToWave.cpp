#include<bits/stdc++.h>
using namespace std;

void convertToWave(int n, vector<int>& arr)
{
    int i = 0;
    while(i+1 <= n-1)
    {
        swap(arr[i],arr[i+1]);
        i=i+2;
    }   
}

int main()
{
    int n = 5;
    vector<int> arr = {1,2,3,4,5};
    convertToWave(n,arr);

    for(int x: arr)
    {
        cout<<x<<" ";
    }
}