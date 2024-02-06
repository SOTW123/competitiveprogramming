#include <bits/stdc++.h>

using namespace std;

ifstream fin("main.in");

template<typename T> void printv(vector<T> v) {
    for(auto e : v )
        cout << e << ", ";
    cout << endl;
}
template<typename T> void printvv(vector<vector<T>> v) {
    for(auto subv : v) {
        for(auto e : subv) {
            cout << e << ", ";
        }
        cout << endl;
    }
    cout << endl;
}

#define ll long long
//#define fin cin

void solve() {
    int n;
    fin >> n;
    string a,b;
    for(int i = 0; i < n; i++) {
        char c;
        fin >> c;
        a+=c;
    }
    for(int i = 0; i < n; i++) {
        char c;
        fin >> c;
        b+=c;
    }
    int ans = 0;
    int curr = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            continue;
        } else {
            if(a[i] != a[i+1] && b[i] != b[i+1]) {
                curr++;
            }
        }
    }
    cout << curr << endl;
}
int main() {
    //int t;
    //fin >> t;
    //for(int i = 0; i < t; i++) solve();
    solve();
}
