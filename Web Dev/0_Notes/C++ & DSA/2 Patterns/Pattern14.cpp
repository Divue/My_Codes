#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        
        int ch=1;
        while (ch<i)
        {
            cout<<" ";
            ch++;
        }
        int j=1;
        while (j<=n-i+1)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
        
    }
}