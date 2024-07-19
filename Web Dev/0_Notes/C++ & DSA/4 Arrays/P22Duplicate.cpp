#include <iostream>
using namespace std;
//Find duplicate array  
//input should be  1 to s-1  eg s=5 arr= 12342   duplicate =2

// METHOD 2 USING XOR
void duplicate2(int arr[], int s)
{
    int ans=0;
    // XOR ing all array elements
    for(int i=0;i<s;i++)
    ans^=arr[i];
    // XOR [1,n-1]
    for(int i=0;i<s;i++)
    ans^=i;

    cout<<"Duplicate is "<<ans;
}

//METHOD 1 USING BRUTE FORCE
void duplicate(int arr[], int s)
{
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        if(arr[i]==arr[j])
        cout<<"duplicate "<<arr[i]<<endl;
    }
}

int main()
{
    int arr[100],s;
    cout<<"Enter size\n";
    cin>>s;
    for(int i=0;i<s;i++)
    cin>>arr[i];
    duplicate2(arr,s);
    //duplicate(arr,s); 
}