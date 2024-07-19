#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c(0),max(0);
	cin>>n;

	while(n--)
	{
		cin>>a>>b;
		c=b-a+c;

		if(c>max)
			max=c;
	}
	cout<<max;
}