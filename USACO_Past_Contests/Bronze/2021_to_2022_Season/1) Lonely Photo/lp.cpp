#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ifstream fin("lp.in");

int main() {
    ll N;
    cin >> N;
    cin.ignore();
    string line;
    getline(cin, line);
    
    
    int trash = 0;
    for (ll j = 3; j <= N; j++) {
        // i will be the start index of the substr
        // j will be the size of the substr
        for (ll i = 0; i <= N - j; i++) {
            int H = 0;
            int G = 0;
            string s = line.substr(i,j);
            ll len = s.size();
            
            for(ll k = 0; k < len; k++) {
                if(s[k] == 'H') {
                    H++;
                } else if(s[k] == 'G') {
                    G++;
                }
            }
            if(H <= 1) {
                trash++;
            } else if (G <= 1) {
                trash++;
            }
            
        }
        
    }
    cout << trash << endl;
    return 0;
}


