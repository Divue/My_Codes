#include <iostream>
#include <math.h>
using namespace std;
int power()
{
    int a, b;
    cout << "Enter a and b\n";
    cin >> a >> b;
    cout << "power is " << pow(a, b) << endl;
}
int isEven()
{
    int a;
    cout << "Check even or odd\n";
    cin >> a;
    if (a & 1)
    {
        cout << "Odd";
        return 1;
    }
    cout << "Even";
}
int main()
{
    power();
    isEven();
}