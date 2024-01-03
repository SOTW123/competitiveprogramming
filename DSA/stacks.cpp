#include <bits/stdc++.h>

using namespace std;

template<typename T>
void printV(vector<T> &v) {
    for(T t : v) {
        cout << t << " ";
    }
    cout << endl;
}

string pangrams(string s) {
    string a = "ABCDEFGHIJKLMNOPQRSTUVWVXYZ";
    int an = a.size();
    int m = 0;
    int n = s.size();
    int sp = 0;
    cout << n << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < an; j++) {
            if(s[i] == a[j] || s[i] == tolower(a[j])) {
                m++;
            } else if(s[i] == ' ') {
                sp++;
            }
            cout << m << ",";
        }
        cout << endl;
        cout << s[i] << endl;       
    }
    cout << m << n << endl;
    cout << sp << endl;
    if(m != (n-sp)) {
        return "not pangram";
    }
    return "pangram";
}

int main() {
    
    cout << pangrams("We promptly judged antique ivory buckles for the next prize") << endl;
    return 0;
}


