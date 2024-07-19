#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int i=0;
    while (i<n)
    {
        int j=1;
        while (j<=n-i)
        {
            cout<<j;
            j++;
        }
        j=1;
        while(j<=i*2)
        {
            cout<<"*";
            j++;
        }
        j=n-i;
        while(j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    
}