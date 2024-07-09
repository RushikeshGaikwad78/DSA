#include <iostream>
using namespace std;

int bs(int a[], int n, int target, int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (a[mid] == target)
    {
        return mid;
    }
    else if (a[mid] > target)
    {
        bs(a, n, target, low, mid - 1);
    }
    else
    {
        bs(a, n, target, mid + 1, high);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target = 16;
    int low=0;
    int high = n-1;
    // cout<<1<<endl;
    cout << bs(arr, n, target,low,high) << endl;
}



//time complexity = O(log2 n)