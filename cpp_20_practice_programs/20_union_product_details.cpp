#include <iostream>
#include <string>
using namespace std;

union ProductCode {
    int numericCode;
    char letterCode;
};

int main() {
    ProductCode code;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cin >> code.numericCode;
        cout << "Product code: " << code.numericCode << '\n';
    } else if (choice == 2) {
        cin >> code.letterCode;
        cout << "Product code: " << code.letterCode << '\n';
    } else {
        cout << "Invalid choice\n";
    }

    return 0;
}
