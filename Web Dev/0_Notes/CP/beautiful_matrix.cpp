#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
	#endif
	
  	int a;
  	for(int i=1;i<=5;i++)
  	{
  		for(int j=1;j<=5;j++)
  		{
  			cin>>a;
  			if(a==1)
  				cout<<abs(3-i)+abs(3-j);
  		}
  	}
}