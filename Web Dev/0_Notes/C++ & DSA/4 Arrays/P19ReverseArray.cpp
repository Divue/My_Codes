#include <iostream>
using namespace std;

int reverse(int arr[],int s)
{
    int end=s-1,start=0;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int swappedarray(int arr[],int s)
{
    for(int i=0;i<s;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[100],s;
    cout<<"Enter size\n";
    cin>>s;
    for(int i=0;i<s;i++)
    cin>>arr[i];

    reverse(arr,s);
    swappedarray(arr,s);
}