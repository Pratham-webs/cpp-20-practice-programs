#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point first, second;
    cin >> first.x >> first.y;
    cin >> second.x >> second.y;

    double dx = second.x - first.x;
    double dy = second.y - first.y;
    double distance = sqrt(dx * dx + dy * dy);

    cout << distance << '\n';
    return 0;
}
