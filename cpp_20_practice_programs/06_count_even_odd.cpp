#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (value % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << even << ' ' << odd << '\n';
    return 0;
}
