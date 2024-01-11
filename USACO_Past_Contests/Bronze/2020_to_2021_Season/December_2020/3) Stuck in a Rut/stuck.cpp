#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("stuck.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int a = 1e3;
    while(a != 0) {
        cout << a << " ";
        a--;
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
