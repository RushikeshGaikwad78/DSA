#include <iostream>
#include <vector>
using namespace std;

void printsub(int index, vector<int>& emptyarr, vector<int>& array, int sum)
{
    if (index >= array.size())
    {
        int arrsum = 0;
        for (int i = 0; i < emptyarr.size(); i++)
        {
            arrsum += emptyarr[i];
        }
        if (arrsum == sum)
        {
            for (int i = 0; i < emptyarr.size(); i++)
            {
                cout << emptyarr[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    emptyarr.push_back(array[index]);
    printsub(index + 1, emptyarr, array, sum);
    emptyarr.pop_back();
    printsub(index + 1, emptyarr, array, sum);
}

int main()
{
    vector<int> A = {3, 2, 1, 4};
    vector<int> Empty;
    printsub(0, Empty, A, 5);
    return 0;
}
