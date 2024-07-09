#include <iostream>
using namespace std;

int bs(int a[], int n, int target)
{
    int high = n - 1;
    int low = 0;
    while (low <= high)
    {
        // cout<<2<<endl;
    int mid = (low + high) / 2;

        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target = 4;
    // cout<<1<<endl;
    cout << bs(arr, n, target) << endl;
}

//time complexity = O(log2 n)
