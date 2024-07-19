#include <iostream>
using namespace std;

// Binary Search only works in ascending or descending order
int indexsearch(int ar[], int si, int k)
{
    int s = 0, e = si - 1, mid = (e + s) / 2;

    while (s <= e)
    {
        if (ar[mid] == k)
            return mid;

        // goto right side
        if (k > ar[mid])
            s = mid + 1;
        else 
            e = mid - 1;
        mid = (e + s) / 2;
    }
    return -1;
}

int main()
{
    int ar[5] = {1, 3, 4, 6, 8};
    int index = indexsearch(ar, 5, 6);
    cout << "Index of 6 is " << index << endl;
}