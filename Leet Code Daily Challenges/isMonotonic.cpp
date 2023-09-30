#include<iostream>
#include<vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
        
    bool inc = true;
    bool dec = true;

    for(int i = 0; i < nums.size()-1; i++)
    {
        if(nums[i] > nums[i+1])
            inc = false;
        
        if(nums[i] < nums[i+1])
            dec = false;
    }

    if(inc || dec)
        return true;
    return false;
}

int main()
{
    vector<int> nums = {6,5,4,4};
    cout<<isMonotonic(nums);
}
