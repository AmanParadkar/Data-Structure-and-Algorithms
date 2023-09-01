#include<iostream>
using namespace std;

bool consicativeZero(int n)
{
    while(n>0)
    {
        if( (n & 1) == 1 && ((n >>1) &1) == 1)
            return true;
        n= n>>1; 
    }
    return false;
}

int main()
{
    int n =4;
    
    cout<<consicativeZero(6);
}