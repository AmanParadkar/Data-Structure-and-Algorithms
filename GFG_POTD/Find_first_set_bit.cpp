#include<iostream>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    if(n==0)
        return 0;
    int c = 1;
    
    while(n!=0)
    {
        if(n&1)
        {
            return c;
        }
        c++;
        n=n>>1;
    }
    return c;
}

int main()
{
    int n =8;
    cout<<getFirstSetBit(n);
}
