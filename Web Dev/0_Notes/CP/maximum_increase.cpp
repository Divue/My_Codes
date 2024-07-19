#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c(1),max(1);
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			c++;
		else 
		{
			if(c>max)
				max=c;
			c=1;
		}
	}
	if(c>max)
		max=c;
	cout<<max;
}