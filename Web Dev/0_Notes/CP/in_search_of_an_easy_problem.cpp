#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,c=0;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x!=0)
			c++;
	}
	cout<<(c>0 ? "hard" : "easy");
}