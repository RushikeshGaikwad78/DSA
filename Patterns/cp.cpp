#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cout<<"t"<<endl;
    cin >> t;

    while (t--) {
        int n;
        cout<<"N"<<endl;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        
        sort(a, a + n, greater<int>());

        long long r = 0;
        for (int i = 0; i < n - 1; ++i) {
            r += static_cast<long long>(a[i]) +a[i + 1];
        }

        cout << r << endl;
    }

    return 0;
}
