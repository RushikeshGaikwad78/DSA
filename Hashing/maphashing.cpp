#include <iostream>
#include <map>
using namespace std;

//for same task array was taking 13 places while here it will be performed in less space
//map stores all the values in sorted order
//unordered map -> not sorted, 

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
    map <int,int>mp ;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    

    int q;
    cout<<"Enter no of queries"<<endl;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter number";
        cin>>number;
        // fetch
        cout<<"it occurs for"<<mp[number]<<endl;
    }
}