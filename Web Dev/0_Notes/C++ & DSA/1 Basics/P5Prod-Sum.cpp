//P5
#include<iostream>
using namespace std;
int main()
{
    int n;  int p=1,s=0;
    cout<<"ENter n\n"<<endl;
    cin>>n;
   while(n>0)
   {
    s+=n%10;
    p*=n%10;
    n/=10;
   }
    cout<<endl <<p<<" - "<<s <<" "<<p-s;
}