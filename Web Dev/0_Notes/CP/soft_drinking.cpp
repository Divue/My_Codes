#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
	#endif
	
	int n,k,l,c,d,p,nl,np;
 	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

 	// int drink=(k*l)/nl;
 	// int lime=c*d;
 	// int salt=p/np;

 	// cout<<min(min(drink,lime),salt)/n;

 	cout<<min(min((k*l)/nl,c*d),p/np)/n;	
}