#include <iostream>
using namespace std;

void swapValues(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    swapValues(&a, &b);

    cout << a << ' ' << b << '\n';
    return 0;
}
