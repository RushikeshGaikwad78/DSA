// smallest index such that arr[ind] > n
//then that index is upper bound for the same


//inbuilt method = >
// int upperbound = upper_bound(vector.begin(),vector.end(),x) - vector.begin();


#include <iostream>
using namespace std;

int ub(int a[], int n, int target)
{
    int high = n - 1;
    int low = 0;
    int ans = n;      //need to keep it if element is outside the array
    while (low <= high)
    {
        // cout<<2<<endl;
    int mid = (low + high) / 2;

        if (a[mid] > target)
        {
            ans = mid ;
            high = mid -1;

        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target = 15;
    // cout<<1<<endl;
    cout << ub(arr, n, target) << endl;
}

//time complexity = O(log2 n)
