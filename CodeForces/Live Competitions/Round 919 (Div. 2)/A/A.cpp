#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int exclude = 0;
        array<int, 2> k;
        vector<int> threes;
        int n;
        cin >> n;
        bool hasType1 = false, hasType2 = false;

        for(int j = 0; j < n; j++) {
            int a, temp;
            cin >> a >> temp;

            if(a == 1) {
                if (!hasType1) {
                    k[0] = temp;
                    hasType1 = true;
                } else {
                    k[0] = max(k[0], temp);
                }
            } else if(a == 2) {
                if (!hasType2) {
                    k[1] = temp;
                    hasType2 = true;
                } else {
                    k[1] = min(k[1], temp);
                }
            } else if(a == 3) {
                threes.push_back(temp);
            }
        }

        if (!hasType1 || !hasType2) {
            cout << "0" << endl;
            continue;
        }

        int three_size = threes.size();
        for(int j = 0; j < three_size; j++) {
            if(threes[j] >= k[0] && threes[j] <= k[1]) {
                exclude++;
            }
        }

        int output = k[1] - k[0] - exclude + 1;
        if(output < 0) {
            output = 0;
        }

        cout << output << endl;
    }

    return 0;
}
