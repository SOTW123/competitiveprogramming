#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("billboard.in");
ofstream fout("billboard.out");

template<typename T>
void printV(vector<T> v);

void print2V(vector<vector<bool>> &v) {
    int n = v.size();
    int m = v[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int x5, y5, x6, y6;

    fin >> x1 >> y1 >> x2 >> y2;
    fin >> x3 >> y3 >> x4 >> y4;
    fin >> x5 >> y5 >> x6 >> y6;
    
    vector<vector<bool>> graph(2001, vector<bool>(2001, false));
    
    vector<vector<bool>> test(10, vector<bool>(10, false));

    int n = test.size();
    test[n-x1][y1-1] = 1;
    test[n-x2][y2-1] = 1;

    print2V(test);
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}


