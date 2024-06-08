#include <iostream>
using namespace std;

void printStars(int count) {
    for (int i = 0; i < count; ++i) {
        cout << "*";
    }
    cout << endl;
}

void printPattern(int n) {
    for (int i = 0; i < n; ++i) {
        printStars(i + 1);
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}

