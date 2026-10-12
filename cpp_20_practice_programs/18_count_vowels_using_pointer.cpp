#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    const char *ptr = text.c_str();
    int vowels = 0;

    while (*ptr != '\0') {
        char ch = static_cast<char>(tolower(static_cast<unsigned char>(*ptr)));
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        ptr++;
    }

    cout << vowels << '\n';
    return 0;
}
