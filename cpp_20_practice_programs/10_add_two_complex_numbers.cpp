#include <iostream>
using namespace std;

struct ComplexNumber {
    float real;
    float imaginary;
};

int main() {
    ComplexNumber first, second, result;

    cin >> first.real >> first.imaginary;
    cin >> second.real >> second.imaginary;

    result.real = first.real + second.real;
    result.imaginary = first.imaginary + second.imaginary;

    cout << result.real << " + " << result.imaginary << "i\n";
    return 0;
}
