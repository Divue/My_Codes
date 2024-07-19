#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a;
	cin>>n>>a;

	int min(a),max(a),mini(0),maxi(0);
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a>max)
		{
			max=a;
			maxi=i;
		}
		if(a<=min)
		{
			min=a;
			mini=i;
		}
	}
	cout<<(maxi-1) + (n-mini) - (mini<maxi?1:0);
}