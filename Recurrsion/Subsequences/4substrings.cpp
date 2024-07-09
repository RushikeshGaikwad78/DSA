#include <bits/stdc++.h>
using namespace std;


//generalized 
void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }

    string op1 = op;
    string op2 = op + ip[0];
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}

int main(){
    string ip = "acb";
    string op = "";
    solve(ip,op);
} 





//for unique substrings using set


// #include <bits/stdc++.h>
// using namespace std;

// void solve(string ip, string op,set<string> &result){
//     if(ip.length()==0){
//         result.insert(op);
//         return;
//     }

//     string op1 = op;
//     string op2 = op + ip[0];
//     ip.erase(ip.begin()+0);
//     solve(ip,op1,result);
//     solve(ip,op2,result);
// }

// int main(){
//     string ip = "aab";
//     string op = "";
//     set<string> result;
    
//     solve(ip,op,result);
    
//     for(auto str : result){
//         cout<<str<<" ";
//     }
// } 