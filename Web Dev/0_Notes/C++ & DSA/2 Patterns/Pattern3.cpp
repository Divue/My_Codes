// Patern 3
#include <iostream>
using namespace std;
int main()
{
     /*
      without using an extra variable 
    for(int j=i;j<=i*2-1;j++)
    {
    cout<<j;
    */
    int n;int c;
    cout<<"Enter n\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    c=i;
   
    for(int j=1;j<=i;j++)
    {
    cout<<c;
    c++;
    }
    cout<<endl;
}
}