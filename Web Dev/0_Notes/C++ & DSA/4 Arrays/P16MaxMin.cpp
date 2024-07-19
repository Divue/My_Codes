#include <iostream>
#include <limits.h>
//  or  <limits.h>  to use INT_MAX or INT_MIN
using namespace std;

int display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int Max(int arr[], int s)
{
    int maxi = INT_MIN;              // minimum no. 
    for (int i = 0; i < s; i++)
    {
        maxi = max(maxi, arr[i]);    //hepls in finding max 
        // if (arr[i] > maxi)
        //    maxi = arr[i];
    }
    cout << "Maxi is " << maxi;
    cout << endl;
}

int Min(int arr[], int s)
{
    int mini = INT_MAX;
    for (int i = 0; i < s; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < mini)
        //  mini = arr[i];
    }
    return mini;
    cout << endl;
}

int main()
{
    int s;
    cout << "Enter size" << endl;
    cin >> s;
    int arr[100];

    cout << "Enter array valur\n";
    for (int i = 0; i < s; i++)
        cin >> arr[i];

    display(arr, s);
    Max(arr, s);
    cout << "Min is " << Min(arr, s) << endl;
}