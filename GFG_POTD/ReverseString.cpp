#include<iostream>
#include<string>
using namespace std;

//approch1
string reverse(string &str)
{
    int n = str.size();
    for(int i=0;i<n/2;i++)
    {
        swap(str[i],str[n-1-i]);
    }
    return str;
}

//approch2
string reverse2(string &str)
{
    reverse(str);
    return str;
}
int main()
{
    string str = "github";

    reverse2(str);
    cout<<str;    
}