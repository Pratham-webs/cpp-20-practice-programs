#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    if (n > 0) {
        k %= n;
        int rotated[1000];

        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (i > 0) cout << ' ';
            cout << rotated[i];
        }
    }
    cout << '\n';

    return 0;
}
