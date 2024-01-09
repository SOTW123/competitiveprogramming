#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("traffic.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int N;
    fin >> N;

    for(int i = 0; i < N; i++) {
        string type;
        fin >> type;
        int ub, lb;
        fin >> ub >> lb;
        
    }
    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
