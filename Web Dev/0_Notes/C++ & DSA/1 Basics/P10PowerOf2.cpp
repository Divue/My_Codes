#include <iostream>
#include <math.h>
using namespace std;

// using bits
int main()
{

    cout << "Enter n" << endl;
    int n;
    cin >> n;
    int c = 0;
    while (n > 0)
    {
        if (n & 1)
        c++;
        n >>= 1;
    }
    if (c == 1)
        cout << "\nPower of 2 " << endl << c;
    else
        cout << "Not Power of 2";
}
// normal process
/*int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;
    for(int i=0;i<31;i++)
    {   //integer range is 2^31-1
        int ans=pow(2,i);
        if(ans==n)
        cout<<n<<" is 2^"<<i;
    }
    //CHECK MINIMUM RANGE AS WELL
}
*/