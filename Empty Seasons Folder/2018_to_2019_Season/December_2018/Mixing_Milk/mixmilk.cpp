#include <iostream>
#include <fstream>

typedef long long ll;

using namespace std;

ifstream fin("mixmilk.in");
ofstream fout("mixmilk.out");

int main() {
    int b1s, b1c;
    int b2s, b2c;
    int b3s, b3c;

    cin >> b1c >> b1s;
    cin >> b2c >> b2s;
    cin >> b3c >> b3s;

    for (ll i = 0; i < 100; i++) {
        if (i % 3 == 0) {
            if (b1s + b2s <= b2c) {
                b2s += b1s;
                b1s = 0;
            } else if (b1s + b2s > b2c) {
                int temp = b2s;
                b2s = b2c;
                b1s -= (b2c - temp);
            }
        } else if (i % 3 == 1) {
            if (b2s + b3s <= b3c) {
                b3s += b2s;
                b2s = 0;
            } else if (b2s + b3s > b3c) {
                int temp = b3s;
                b3s = b3c;
                b2s -= (b3c - temp);
            }
        } else if (i % 3 == 2) {
            if (b3s + b1s <= b1c) {
                b1s += b3s;
                b3s = 0;
            } else if (b3s + b1s > b1c) {
                int temp = b1s;
                b1s = b1c;
                b3s -= (b1c - temp);
            }
        }
    }

    cout << b1s << endl << b2s << endl << b3s << endl;

    return 0;
}
