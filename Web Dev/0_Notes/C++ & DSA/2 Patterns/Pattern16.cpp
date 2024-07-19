#include<iostream>
using namespace std;
int main()
{
    int n;int c=1;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
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
            cout<<c;
            j++;c++;
        }
        i++;
        cout<<endl;
        
    }
}