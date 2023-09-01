#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        
    unordered_set<int> st;

    for(int x: nums)
    {
        st.insert(x);
    }

    if(st.size()<nums.size())
        return true;
    return false;
}

int main()
{
    vector<int> A{1,2,3,1};

    cout<<containsDuplicate(A);
}