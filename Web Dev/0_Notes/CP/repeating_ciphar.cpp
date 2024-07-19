#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int gap=2 , i=0;
    while(i<n)
    {
    	cout<<s[i];
    	i+=gap;
    	gap++;
    }
    
    cout << endl;
    return 0;
}