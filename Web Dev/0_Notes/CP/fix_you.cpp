#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,cnt(0);
		cin>>n>>m;
		char ch[n][m];
		for(int i=0;i<n;i++)
		{
		    for(int j=0;j<m;j++)
		    {
		        cin>>ch[i][j];
		        if(j==m-1)
		        {
		            if(ch[i][j]=='R')
		                cnt++;
		        }
		        if(i==n-1)
		        {
		            if(ch[i][j]=='D')
		                cnt++;
		        }
		    }
		}
		cout << cnt << "\n";
	}
}