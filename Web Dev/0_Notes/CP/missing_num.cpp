#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout);
	#endif
	long long n,num,s=0;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>num;
		s+=num;
	}
	cout << ( n * (n + 1) ) / 2 - s<<endl;
	
}

 