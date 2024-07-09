#include <iostream>
#include <string>
using namespace std;

string convert2binary(int n){
    string r="";
    while(n!=0){
        r = to_string(n%2)+r;
        n=n/2;
    }
    return r;
}

int main(){
    int n=10036;
    cout<<"RESULT:"<<endl;
    string res = convert2binary(n);
    cout<<res<<endl;
}