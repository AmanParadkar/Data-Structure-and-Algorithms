#include<iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return !(n&n-1);
}
int main()
{
   cout<<isPowerOf2(16);
}