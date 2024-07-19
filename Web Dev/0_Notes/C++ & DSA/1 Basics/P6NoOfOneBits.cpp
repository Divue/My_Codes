//P6
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        cout<<n<<"  ";
        if(n&1)
        c++;
        n>>=1;
    }
    cout<<endl<<n<<endl<<c;
}