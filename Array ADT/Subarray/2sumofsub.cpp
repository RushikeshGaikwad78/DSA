#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        int sum = 0;

        for (int j = i; j < 5; j++)
        {
            // int sum=0;
            // for (int k = i; k <= j; k++)
            // {
            sum = sum + a[j];
            // }
            cout << sum;
            cout << endl;
        }
        cout << endl;
    }
}