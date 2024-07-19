// Patern 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    int f = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " " << f;
            j++;
            f++;
        }
        cout << endl;
        i++;
    }
}
