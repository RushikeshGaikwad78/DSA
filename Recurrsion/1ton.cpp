#include <iostream>
using namespace std;

void rec(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    rec(n,i+1);
}

int main(){
   int n = 10;
   int i=1;
   rec(n,i);
}