#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;int ans=0;
    cout<<"Enter n\n";
    cin>>n;
    for(int i=n;i>0;i/=10)
    { 
       //DO REMEMBER TO CHECK THE RANGE WHILE REVERSING    
       // THIS IS IMPORTANT  , IF OUT OF RANGE RETURN 0

        int dgt=i%10;
        ans=ans*10+dgt;
    }
    cout<<endl<<ans;
}