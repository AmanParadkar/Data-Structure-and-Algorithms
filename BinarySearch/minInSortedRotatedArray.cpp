#include<bits/stdc++.h>
using namespace std;

// leetcode 153
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

int findMin(vector<int>& nums) {
        
    int i= 0 ;
    int j= nums.size()-1;
    int mid=0;
    while(i<=j)
    {
        mid = (i+j)/2;

        if(nums[i]<nums[mid])
        {
            if(nums[i] < nums[j])
                j=mid-1;
            else
                i=mid+1;
        }
        else
        {
            if(nums[mid] < nums[j])
                j=mid;
            else
                i=mid+1;
        }
    }
    return nums[mid];
}
int main()
{
    vector<int> A = {4,5,6,7,0,1,2};
    cout<<findMin(A);

}