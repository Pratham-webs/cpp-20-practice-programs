#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout << largest << '\n';
    return 0;
}
