#include <iostream>
using namespace std;

enum Signal {
    Red = 1,
    Yellow,
    Green
};

int main() {
    int choice;
    cin >> choice;

    Signal signal = static_cast<Signal>(choice);

    switch (signal) {
        case Red:
            cout << "Stop\n";
            break;
        case Yellow:
            cout << "Wait\n";
            break;
        case Green:
            cout << "Go\n";
            break;
        default:
            cout << "Invalid signal\n";
    }

    return 0;
}
