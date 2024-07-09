#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Input character array"<<endl;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //precompute

    //in hash array :- a=0,b=1,c=2,.....
    //a asccii value 97 ,  indexforchar = asciiofchar - 97
    int hash[25]={0};
    for(int i=0;i<n;i++){
        hash[a[i]-'a']++;
    }

    int q;
    cout<<"Enter no of queries"<<endl;
    cin>>q;
    while(q--){
        char character;
        cout<<"Enter character";
        cin>>character;
        // fetch
        cout<<"it occurs for"<<hash[character-97]<<endl;
    }
}