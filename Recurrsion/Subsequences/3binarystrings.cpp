#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<int> A(n, 0);
        A[i] = 1;
        for (int k = 0; k < n; k++)
        {
            cout << A[k] << " ";
        }
        cout << endl;
        for (int j = i + 2; j < n; j++)
        {
            A[j] = 1;
            for (int k = 0; k < n; k++)
            {
                cout << A[k] << " ";
            }
            A[j]=0;
            cout << endl;
        }
    }
}