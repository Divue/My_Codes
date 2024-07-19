#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
	#endif
	
	string s;
	cin>>s;

	int ans=0, cur=1;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]!=s[i-1]){
			ans=max(ans,cur);
			cur=0;
		}
		cur++;
	}
	ans=max(ans,cur);
	cout<<ans;
   
}