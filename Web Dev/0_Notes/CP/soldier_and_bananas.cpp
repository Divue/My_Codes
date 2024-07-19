#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,w;
	cin>>k>>n>>w;

	int tc=0;
	for(int i=1;i<=w;i++)
		tc+= k*i;

	// while(w>0){
	// 	cout<<w<<endl;
	// 	tc+=k*w;
	// 	w--;
	// }
	cout<<(tc-n<0?0:tc-n);
}