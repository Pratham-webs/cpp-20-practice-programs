#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element\n";
    } else {
        cout << second << '\n';
    }

    return 0;
}
