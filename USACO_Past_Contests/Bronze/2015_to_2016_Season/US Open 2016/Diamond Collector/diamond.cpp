/*
still dont understand why i had to sort sizes vecto

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("diamond.in");
ofstream fout("diamond.out");

template<typename T>
void printV(vector<T> v);

int main() {
    int N; fin >> N;
    int K; fin >> K;

    vector<int> sizes(N);
    for(int i = 0; i < N; i++) {
        fin >> sizes[i];
    }
    sort(sizes.begin(), sizes.end());
    vector<int> diamonds;
    for(int i = 0; i < N; i++) {
        int counter = 1;
        for(int j = i + 1; j < N; j++) {
            int ub = sizes[i]+K; // 4
            int lb = sizes[i]-K; // -3
            if(sizes[j] >= lb && sizes[j] <= ub) {
                counter++;
            }
        }
        diamonds.push_back(counter);
    }
    fout << *max_element(diamonds.begin(), diamonds.end()) << endl;
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
