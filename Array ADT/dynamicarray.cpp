#include <iostream>
using namespace std;



int main()
{
   int *A;
   int size=20;
   int length=10;

   A = new int[size];

   for (int i=0;i<length;i++)
   {
    A[i]=i+1;
   }

   for (int i=0;i<length;i++)
   {
    cout<<A[i]<<" ";
   }

   delete []A;
}
