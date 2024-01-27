
#include <bits/stdc++.h>

using namespace std;

ifstream fin("main.in");
//ofstream fout("reststops.out");

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
template<typename T> int maxv(vector<T> v) {
    int mx = 0;
    int n = v.size();
    for(int i = 0; i < n; i++) {
        if(v[i] > mx) {
            mx = v[i];
        }
    }
    return mx;
}

#define ll long long
//#define int long long
//#define fin cin
void solve() {
    int n, m;
    fin >> n >> m;
    vector<int> cowHeights(n);
    vector<int> cowReaches(n,0);
    for(int i = 0; i < n; i++) {
        fin >> cowHeights[i];
    }

    for(int i = 0; i < m; i++) {
        int candy;
        int height = 0;
        fin >> candy;
        for(int j = 0; j < n; j++) {
            //cowReaches[j] = candy;
            if(cowHeights[j]>height) {
                 int temp;
                 if(candy >= cowHeights[j]) {
                    temp = cowHeights[j]-height;
                 } else {
                    temp = candy;
                 }
                 candy -= cowHeights[j]-height;
                 height += cowHeights[j]-height;

                 cowHeights[j] += temp;
                 //cout << candy << "," << height << "." << cowHeights[j] << endl;
            }
            printv(cowHeights);
        }
        cout << endl;
    }


}
int main() {
    //int t;
    //fin >> t;
    //for(int i = 0; i < t; i++) solve();
    solve();
}
