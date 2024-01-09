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
    x1+=10;
    y1+=10;
    x2+=10;
    y2+=10;

    x3+=10;
    y3+=10;
    x4+=10;
    y4+=10;

    x5+=10;
    y5+=10;
    x6+=10;
    y6+=10;
    vector<vector<bool>> graph(2001, vector<bool>(2001, false));
    vector<vector<bool>> test(21,vector<bool>(21,0));
        for(int i = x1; i < x2; i++) {
            for(int j = y1; j < y2; j++) {
                test[i][j] = 1;
            }
        }
        for(int i = x3; i < x4; i++) {
            for(int j = y3; j < y4; j++) {
                test[i][j] = 1;
            }
        }

    

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


