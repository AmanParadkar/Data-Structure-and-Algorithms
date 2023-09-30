#include<iostream>
#include<vector>
using namespace std;

//28/09/23
vector<int> sortArrayByParity(vector<int>& nums) {
        
    int i = 0; 
    int j = 0;

    while(j < nums.size())
    {
        if(nums[j] % 2 == 0)
        {
            swap(nums[i],nums[j]);
            i++;
            if(nums[j] % 2 == 0 )
                j++;
        }
        else
            j++;
    }
    return nums;
}

int main()
{
    vector<int>nums = {3,1,2,4};
    sortArrayByParity(nums);
    for(int x: nums)
        cout<<x<<" ";
}