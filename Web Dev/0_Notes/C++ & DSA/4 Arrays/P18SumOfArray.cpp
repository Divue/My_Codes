#include<iostream>
using namespace std;

int input(int arr[],int s)
{
    cout<<"Enter the elements of array\n";
    for(int i=0;i<s;i++)
    cin>>arr[i];
}

int add(int arr[],int s)
{
    int sum;
    for(int i=0;i<s;i++)
    sum+=arr[i];
    cout<<"Sum of array "<<sum;
}

int main()
{
    int arr[100],s;
    cout<<"Enter size\n";
    cin>>s;
    input(arr,s);
    add(arr,s);
}