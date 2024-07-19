#include <iostream>
using namespace std;

void input(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cin >> arr[i];
}

// size will be in 2*n+1 , where n is the frequency of dual element
//  2 elements will be same and one will be single(unique)
void unique(int arr[], int s)
{
    int ans = 0;
    for (int i = 0; i < s; i++)
    ans^=arr[i];        // 2^2=0   0^2=2  ^(XOR)
    cout << "UNique element " << ans;
}

int main()
{
    int arr[100], s;
    cout << "Enter size\n";
    cin >> s;

    input(arr, s);
    unique(arr, s);
}