//P3
#include <iostream>
using namespace std;
int main()
{
    int n;int c=0;
    cout<<"Enetr n\n";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
        
    }
    if(c>0)
    cout<<"NOt Prime";
    else 
    cout<<"Prime";
}
