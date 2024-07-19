#include <iostream>
using namespace std;

int input(int arr[], int s)
{
    cout<<"Enter array\n";
    for(int i=0;i<s;i++)
    cin>>arr[i];
}

int display(int arr[], int s)
{
    cout<<endl;
    for(int i=0;i<s;i++)
    cout<<arr[i];
    cout<<endl;
}

bool LinearSearch(int arr[], int s,int k)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==k)
        return 1;  
    }
    return 0;
}
int main()
{
    cout<<"Enter size of the array\n";
    int arr[100],s,k;
    cin>>s;
    input(arr,s);
    
    display(arr,s);
    cout<<"Enter key\n";
    cin>>k;
    bool ans=LinearSearch(arr,s,k); 
    if(ans)
    cout<<"Key is Present";
    else 
    cout<<"Key is Absent";
}