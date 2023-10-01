#include<bits/stdc++.h>
using namespace std;

void rev(string &s)
{
    int i = 0;
    int j = s.size()-1;

    while(i <=j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
string reverseWords(string s) {

    string ans = "";

    int i = 0;
    while(i < s.size())
    {
        int j = i;
        string temp = "";
        while(i < s.size() && s[i] != ' ')
        {

            temp = temp + s[i];
            i++;
        }
        while(i < s.size() && s[i] == ' ')
        {
            i++;
        }

        rev(temp);
        if(ans.size() == 0)
            ans = ans+temp;
        else
            ans = ans +' '+temp;
    }
    return ans;
}

int main()
{
    string  s = "Let's take LeetCode contest";
    cout<<reverseWords(s); 
}