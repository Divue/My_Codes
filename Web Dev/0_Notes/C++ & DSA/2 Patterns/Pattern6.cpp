#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j<=n+i-1)
        {
            cout<<char(64+j);
            j++;
        }
        i++;
        cout<<endl;
    }
}