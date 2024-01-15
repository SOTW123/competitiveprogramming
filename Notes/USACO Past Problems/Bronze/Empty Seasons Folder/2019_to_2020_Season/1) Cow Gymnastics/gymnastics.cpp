#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("gymnastics.in");
ofstream fout("gymnastics.out");

template<typename T>
void printV(vector<T> v);

template<typename T>
void print2V(vector<vector<T>> v) {
    for(auto sub : v) {
        for(auto elem : sub) {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int K;
    fin >> K;
    int N;
    fin >> N;

    vector<vector<int>> counter(N, vector<int> (N,0));
    
    vector<vector<int>> input(K, vector<int>(N));
    for(int k = 0; k < K; k++) {
        for(int l = 0; l < N; l++) {
            fin >> input[k][l];
        }
    }
    
    for(int i = 0; i < K; i++) {
        vector<int> v = input[i];
        for(int j = 0; j < N; j++) {
            for(int k = j + 1; k < N; k++) {
                if(v[j] < v[k]) {
                    counter[k][j]++;
                } else if(v[j] > v[k]) {
                    counter[j][k]++;
                }
            }
        }
    }
    int num_pairs = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(counter[i][j] == K) {
                num_pairs++;
            }
        }
    }
    cout << num_pairs;
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
