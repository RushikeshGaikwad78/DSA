#include <bits/stdc++.h>
using namespace std;


void solve(string ip, string op){
    if(ip.size()==0){
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    if(ip[0]>='a' && ip[0]<='z'){
        op2.push_back(toupper(ip[0]));
    }
    else{
        op2.push_back(tolower(ip[0]));
    }
    ip.erase(ip.begin()+0);

    solve(ip,op1);
    solve(ip,op2);
}

int main(){
    string ip = "A";
    string op = "";
    solve(ip,op);
    cout<<endl;
}