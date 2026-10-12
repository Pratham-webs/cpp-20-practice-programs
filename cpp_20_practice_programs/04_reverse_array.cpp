#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';

    return 0;
}
