#include<iostream>;
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=i;
        while (j<=i*2-1)
        {
            
            cout<<char(64+j);
            j++;
        }
        cout<<endl;
        i++;
    }
    
}