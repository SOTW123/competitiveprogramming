#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("cownomics.in");
ofstream fout("cownomics.out");

template<typename T>
void printV(vector<T> v);
template<typename T>
void print2V(vector<T> v);

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> plain(N, vector<char>(M));
    vector<vector<char>> spotty(N, vector<char>(M));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> plain[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> spotty[i][j];
        }
    }

    int counter = 0;
    for(int i = 0; i < M; i++) {
        bool cond = 1;
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                if(plain[j][i] == spotty[k][i]) {
                    cond = 0;
                }
            }
        }
        if(cond == 1) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}

template<typename T>
void print2V(vector<T> v) {
    for(T value : v) {
        printV(value);
    }
}
