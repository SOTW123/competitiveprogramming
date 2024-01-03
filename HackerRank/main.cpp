#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("main.in");




int main() {
    string s = "We promptly judged antique ivory buckles for the next prize";
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string b = "abcdefghijklmnopqrstuvwxyz";
    
    for(int i = 0; i < 26; i++) {
        cout << a[i] << b[i] << endl;
        if(s.find(a[i]) == string::npos || s.find(b[i]) == string::npos) {
            cout <<  "not pangram";
            break;
        }
    }
    cout <<  "pangram";

    return 0;
}

