#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }

    int size = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[size - 1]) {
            arr[size] = arr[i];
            size++;
        }
    }

    cout << size << '\n';
    for (int i = 0; i < size; i++) {
        if (i > 0) cout << ' ';
        cout << arr[i];
    }
    cout << '\n';

    return 0;
}
