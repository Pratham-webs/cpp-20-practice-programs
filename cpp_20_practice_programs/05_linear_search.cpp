#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;

    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    cout << position << '\n';
    return 0;
}
