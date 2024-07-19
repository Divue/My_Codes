#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int a = 0, b = 1, c = 0;
    cout << a;
    for (int i = 1; i < n; i++)
    {
        a = b;
        b = c;
        c = a + b;
        cout << c;
    }
    cout << "\nNth Term is " << c;
}