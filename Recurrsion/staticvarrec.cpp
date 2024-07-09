#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    else
    {
        return 0;
    } 
}

int main()
{
    int x = 3;
    int result = fun(x);
    cout << "Result: " << result << endl;
    return 0;
}

