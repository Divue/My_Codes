#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;

	// f1
	// if(s[0]>=97)    ascii value of lower case
		// s[0]=s[0]-32;

	// f2
	// cout<<char(s[0]-32);

	// f3
	transform(s.begin(), s.begin()+1, s.begin(), ::toupper);
	cout<<s;
}