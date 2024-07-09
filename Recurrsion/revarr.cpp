#include <iostream>
using namespace std;

void revarr(int l, int arr[], int size) {
    int r = size - 1;
    if (l >= r / 2)
        return;
    swap(arr[l], arr[r - l]);
    revarr(l + 1, arr, size);
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    revarr(l, arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
