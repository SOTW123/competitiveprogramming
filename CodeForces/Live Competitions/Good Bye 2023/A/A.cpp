#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("A.in");
    
    int t;
    fin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        fin >> n >> k;

        vector<int> b(n);

        for (int j = 0; j < n; j++) {
            fin >> b[j];
        }

        int product_b = accumulate(b.begin(), b.end(), 1, multiplies<int>());

        if (2023 % product_b == 0) {
            cout << "YES" << endl;
            for (int j = 0; j < n; j++) {
                cout << 2023 / product_b * b[j] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
