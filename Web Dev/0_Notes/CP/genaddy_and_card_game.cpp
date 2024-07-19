#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,n;
	int c=0,i=5;
	cin>>s;
	while(i--)
	{
		cin>>n;
		if(n[0]==s[0] || n[1]==s[1])
			c++;
	}
	if(c>0)
		cout<<"YES";
	else
		cout<<"NO";
}