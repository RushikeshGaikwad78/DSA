#include <iostream>
#include <vector>
using namespace std;

int factorial(int n){
    int fact ;
    if(n>1){
         fact = factorial(n-1)*n;
         return fact;
    }

}

int main(){
    cout<<"Enter n:"<<endl;
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}