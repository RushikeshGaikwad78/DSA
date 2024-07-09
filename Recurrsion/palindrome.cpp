#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i,int n){
    if(i>n/2)return true;
    if(s[i]==s[n-i-1]){isPalindrome(s,i+1,n);}
    else{return false;}
}

int main(){
    string s = "madam";
    int n = s.size()-1;
    cout<<isPalindrome(s,0,n);
}