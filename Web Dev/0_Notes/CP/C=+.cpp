#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long a,b,n;
	while(t--)
	{
		cin>>a>>b>>n;
		int c(0);
		long sum(0);

		while(sum<=n)
		{
			if(a>b)
			{
				b+=a;
				c++;
				sum=b;
			}
			else
			{	
				a+=b;
				c++;
				sum=a;
			}
		}
		cout<<c<<endl;
	}
}