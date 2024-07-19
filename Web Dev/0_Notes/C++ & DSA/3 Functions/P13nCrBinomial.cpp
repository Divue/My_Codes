#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int nCr(int n, int r)
{
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter n,r\n ";
    cin >> n >> r;
    cout << "Binomial nCr = " << nCr(n, r);
}