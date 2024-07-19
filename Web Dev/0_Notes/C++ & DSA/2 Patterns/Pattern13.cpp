#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=n;
    while(i>0)
    {
        
        int ch=1;
        while (ch<=n-i)
        {
            cout<<" ";
            ch++;
        }
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        i--;
        cout<<endl;
        
    }
}