#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;

    // Check if it's possible to divide into two parts with even weights
    if (w >= 4 && w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
