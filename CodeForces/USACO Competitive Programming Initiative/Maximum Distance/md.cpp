#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("md.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int N;
    cin >> N;

    vector<int> x;
    vector<int> y;

    for(int i = 0; i < N; i++) {
        int value;
        cin >> value;
        x.push_back(value);
    }
    for(int i = 0; i < N; i++) {
        int value;
        cin >> value;
        y.push_back(value);
    }

    vector<int> distances;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            distances.push_back(pow(x[j]-x[i], 2) + pow(y[j]-y[i], 2));
        }
    }


    cout << *max_element(distances.begin(), distances.end());

    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
