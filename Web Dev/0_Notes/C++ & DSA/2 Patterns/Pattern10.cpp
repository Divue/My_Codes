#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Ent n"<<endl;
    cin>>n;
    int i=n;
    while (i>0)
    {
        int j=i;
        while (j<=n)
        {
            cout<<char(65+j-1);
            j++;
        }
        cout<<endl;
        i--;
    }
    
}