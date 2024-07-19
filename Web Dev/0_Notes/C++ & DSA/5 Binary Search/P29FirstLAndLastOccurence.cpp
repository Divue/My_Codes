#include <iostream>
using namespace std;
// BINARY SEAERCH WORKS ONLY IN SORTED ARRAYS

int firstOccurence(int arr[], int size, int k)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid])
        s=mid+1;
        else     //k<arr[mid]
        e=mid-1;
        mid=(e+s)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int size, int k)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid])
        s=mid+1;
        else
        e=mid-1;
        mid=(e+s)/2;
    }
    return ans;
}

int main()
{
    int arr[6]={1,2,3,3,3,4};
    cout<<"First Occurence of 3 is at Index  "<<firstOccurence(arr,6,3)<<endl;
    cout<<"Last Occurence of 3 is at Index  "<<LastOccurence(arr,6,3)<<endl;
}