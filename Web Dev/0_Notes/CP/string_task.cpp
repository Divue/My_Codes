#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str,ans="";
	cin>> str;

	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
			str[i] = tolower(str[i]);
			// str[i]= str[i]-'A'+'a';

		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
			continue;
		ans.push_back('.');
		ans.push_back(str[i]);

		// if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') 
		// {
		// 	ans.push_back('.');
		// 	ans.push_back(s[i]);
		// }
	}
	cout<<ans;

}


