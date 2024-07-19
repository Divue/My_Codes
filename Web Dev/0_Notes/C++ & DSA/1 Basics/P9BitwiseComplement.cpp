#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0)
    cout<<'1';
    else
    {
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m>>=1;
    }
    int ans=(~n)&mask;
    cout<<ans;
    }
}