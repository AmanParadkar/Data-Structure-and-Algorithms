#include<iostream>
#include<utility>
using namespace std;

bool set(int pos,int x)
{
    return (x & 1<<pos)!=0;
}
pair<int,int> twoUnique(int A[],int n)
{
    int xorOf2 = 0;

    for(int i=0;i<n;i++)
    {
        xorOf2^=A[i];
    }
    int temp = xorOf2;
    int setBit = 0;
    int pos =0;
    while(setBit != 1)
    {
        setBit = xorOf2 & 1;
        pos++;
        xorOf2 = xorOf2>>1;
    }
    int firstNum=0;
    for(int i=0;i<n;i++)
    {
        if(set(pos-1,A[i]))
        {
            firstNum = firstNum ^ A[i];
        }
    }
    return {firstNum,firstNum^temp};
}

int main()
{
    int A[]= {2,3,4,5,6,4,3,2};
    pair<int,int> ans = twoUnique(A,8);

    cout<<ans.first<<" "<<ans.second;
}