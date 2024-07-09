#include <iostream>
using namespace std;

//globally if declared int array can have size upto 10^7 and for boolean 10^8
//while inside main int array can have size only upto 10^6 and for boolean 10^7

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Input array"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }

    int q;
    cout<<"Enter no of queries"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter number";
        cin>>number;
        // fetch
        cout<<"it occurs for"<<hash[number]<<endl;
    }
}