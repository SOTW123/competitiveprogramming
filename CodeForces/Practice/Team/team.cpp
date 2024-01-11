#include <bits/stdc++.h>

using namespace std;


int main() {
    int N;
    cin >> N;

    int problems = 0;
    for(int i = 0; i < N; i++) {
        int counter = 0;
        for(int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            if(a == 1) {
                counter++;
            }
        }
        if(counter >= 2) {
            problems++;
        }
    }
    cout << problems << endl;
    return 0;
}

