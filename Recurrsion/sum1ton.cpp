#include <iostream>
using namespace std;

int sum(int n,int i){
    if(n<=0){
        return i;
    }
    return sum(n-1,i+n);
    
}


int main(){
    int n=10;
    cout<<sum(n,0);
}