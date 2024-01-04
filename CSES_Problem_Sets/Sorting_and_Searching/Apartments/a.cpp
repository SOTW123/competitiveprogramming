#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("a.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int n, m, k;
    fin >> n >> m >> k;

    vector<int> a(n,0);
    vector<int> b(m,0);

    for(int i = 0; i < n; i++) {
        fin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        fin >> b[i];
    }
    int num = 0;
    //---------------------------
    

    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
