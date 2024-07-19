#include<iostream>
using namespace std;

void input(int arr[],int s)
{
    for(int i=0;i<s;i++)
    cin>>arr[i];
}

void swap(int arr[],int s)
{
    for(int i=0;i<s;i=i+2) 
    {
       if(i+1<s)
       swap(arr[i],arr[i+1]);
       
    }
}

void display(int arr[],int s)
{
    for(int i=0;i<s;i++)
    cout<<arr[i];
}

int main()
{
    int arr[100],s;
    cout<<"Enter size\n";
    cin>>s;

    input(arr,s);
    swap(arr,s);
    display(arr,s);
}