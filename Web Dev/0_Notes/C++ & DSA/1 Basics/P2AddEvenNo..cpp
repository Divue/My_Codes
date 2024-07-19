//P2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int s = 0;
    int i = 2;
    while (i <= n)
    {
        s += i;
        i += 2;
    }
    cout << "Sum of even no. of " << n << " is " << s;
}