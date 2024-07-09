#include <iostream>
#include <vector>
using namespace std;

// void printsub(int index, vector<int> emptyarr, vector<int> array)
// {
//     if (index == array.size())
//     {
//         for (int i = 0; i < emptyarr.size(); i++)
//         {
//             cout << emptyarr[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     emptyarr.push_back(array[index]);
//     printsub(index + 1, emptyarr, array);
//     emptyarr.pop_back();
//     printsub(index + 1, emptyarr, array);
// }


void solve(vector<int> ip, vector<int> op){
    if(ip.size()==0){
        for(int i=0;i<op.size();i++){
            cout<<op[i]<<" ";
            // return;
        }
        cout<<endl;
        return;
    }
        vector<int> op1 = op;
        vector<int> op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
    
}

int main()
{
    vector<int> ip = {3, 1, 2};
    vector<int> op;
    // vector<int> result;
    // vector<int> Empty;
    solve(ip,op);
}

// time complexity = 2^n * n  (for every index 2 options and for loop to print array)
// space complexity = O(n)