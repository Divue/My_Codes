#include <iostream>
using namespace std;
int c = 0;

// NUM OF ONE BITS
int OneBit(int n)
{
    for (; n > 0; n >>= 1)
    {
        if (n & 1)
            c++;
    }
}

// FIBONACCI SERIES
int Fibonacci()
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
    cout << "\nNth Term Of Fibonacci Series is " << c;
}

int main()
{
    int a, b;
    cout << "Enter a & b\n";
    cin >> a >> b;
    OneBit(a);
    OneBit(b);
    cout << "No. of One bits is " << c << endl;


    Fibonacci();
}