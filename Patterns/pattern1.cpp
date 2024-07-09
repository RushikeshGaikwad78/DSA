#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n-1;i>=0;i--)
    {
        cout<<string(n-i-1,' ');
        for(int j=0;j<=(2*i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    nStarTriangle(6);
}