#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Process 1
	int n,c,d,t;
	cin>>t;
	while(t--){

		cin>>n;  c=0,d=n%10;
		for(int i=1;i<=4;i++)
		{
			if(d==n)
			{
				c+=i;  
				break; 
			}
			else
			{
				d=(d*10)+n%10;
				c+=i;
			}
		}
		
		int x=(n%10)-1;
		cout<<(x*10)+c<<endl;
	}
}
	// Process 2
// int main() {
// 	int n;
// 	cin >> n;
// 	while (n--) {
// 		long s, ans(0), cnt(0);
// 		cin >> s;
// 		int dig = s % 10;
// 		for (int i = 1; i < dig; i++) {
// 			ans += 10;
// 		}
// 		while (s > 0) {
// 			s = s / 10;
// 			cnt++;
// 		}
// 		for (int i = 1; i <= cnt; i++) {
// 			ans += i;
// 		}
// 		cout << ans << endl;
// 	}
 
// }