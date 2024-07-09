#include <iostream>
#include <string>
using namespace std;

int binary2decimal(string n){
    int res = 0;
    int p2 =1;
   for(int i = n.length() -1 ; i>=0 ; i--){
        if(n[i]=='1'){
            res = res + p2 ;
        }
        p2 = p2 * 2;
   }
   return res;
}

int main(){
    string n="1101";
    cout<<"RESULT:"<<endl;
    int res = binary2decimal(n);
    cout<<res<<endl;
}