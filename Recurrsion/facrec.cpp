#include <iostream>
using namespace std;
int r=0;
int factorial(int n)
{
    if (n==1)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int n=10;
    int resu = factorial(n);
    cout<<resu<<endl;

}