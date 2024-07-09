#include <iostream>
using namespace std;

int bs(int A[], int l, int h, int key)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int *A;
    int size = 20;
    int length = 10;

    A = new int[size];

    for (int i = 0; i < length; i++)
    {
        A[i] = i + 1;
    }

    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }

    int low = 0;
    int high = length - 1;

    cout << bs(A, low, high, 7) << endl;

    delete[] A;

    return 0;
}
