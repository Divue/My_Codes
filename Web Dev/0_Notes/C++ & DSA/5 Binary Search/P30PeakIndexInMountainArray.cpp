#include<iostream>
using namespace std;

int PeakIndex(int arr[],int size)
{
    int s=0, e=size-1, mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]<arr[mid+1])
        s=mid+1;
        else
        e=mid;
        
        mid=s+(e-s)/2;
    }  
    return s;

}
int main()
{
    int arr[4]={3,4,5,0};
    cout<<"\nPeak index is "<<PeakIndex(arr,4);

}