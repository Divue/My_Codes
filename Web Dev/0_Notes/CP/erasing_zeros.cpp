#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
		int s(0), e(0), i, cnt(0);
		for (i = 0; i < str.length(); i++) {
			if (str[i] == '1') {
				s = i;
				break;
			}
		}
		for (i = str.length() - 1; i >= 0; i--) {
			if (str[i] == '1') {
				e = i;
				break;
			}
		}
		for (int i = s; i < e; i++) {
			if (str[i] == '0') cnt++;
		}
		cout << cnt << endl;
 
	}
 
}