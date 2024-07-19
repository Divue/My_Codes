#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=0,ans=0;
    while(n>0)
    {
        int dgt=n%10;
        if(dgt==1)
        ans+=pow(2,i);
        n/=10; i++;    
    }
    cout<<endl<<ans<<endl;
}