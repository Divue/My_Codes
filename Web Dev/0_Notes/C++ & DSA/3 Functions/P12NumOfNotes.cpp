#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter amount\n";
    cin >> n;
    int h, f, tw, te, o;
    switch (1)
    {
    case 1:
        h = n / 100;
        n %= 100;
        cout << "No. Of 100Rs note is " << h << endl;

    case 2:
        f = n / 50;
        n %= 50;
        cout << "No. Of 50Rs note is " << f << endl;

    case 3:
        tw = n / 20;
        n %= 20;
        cout << "No. Of 20Rs note Is " << tw << endl;

    case 4:
        te = n / 10;
        n %= 10;
        cout << "No. Of 10Rs note is " << te << endl;

    case 5:
        o = n / 1;
        cout << "No. Of 1Rs note is " << o << endl;
    }
}