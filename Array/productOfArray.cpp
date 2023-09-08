#include<bits/stdc++.h>
using namespace std;

// problem Statement
//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//productThe  of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

//You must write an algorithm that runs in O(n) time and without using the division operation.
 vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefixVector(nums.size(),1);
        vector<int> suffixVector(nums.size(),1);
        int prePro = 1;

        for(int i=0;i<nums.size();i++)
        {
            prefixVector[i] = prePro;
            prePro = prePro*nums[i];
        }

        int suffPro = 1;

        for(int i=nums.size()-1;i>=0;i--)
        {
            suffixVector[i] = suffPro;
            suffPro = suffPro*nums[i];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = prefixVector[i]*suffixVector[i];
        }
        return nums;
    }

int main()
{
    vector<int> A = {1,2,3,4,5};
    vector<int> ans = productExceptSelf(A);

    for(int x: ans) 
    {
        cout<<x<<" ";
    }

}