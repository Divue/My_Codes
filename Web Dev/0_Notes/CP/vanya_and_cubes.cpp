#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,tc(0),h(0);
	cin>>n;

	while(tc<=n)
	{
		h++;
		tc+=(h*(h+1))/2;
	}
	cout<< h-1;
	
}

