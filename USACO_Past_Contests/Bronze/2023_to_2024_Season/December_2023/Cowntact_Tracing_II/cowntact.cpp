#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("cowntact.in");
ofstream fout("cowntact.out");

template<typename T> void printV(vector<T> v);
template<typename T> void print2V(vector<vector<T>> v);

int main() {
	  
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
void print2V(vector<vector<T>> v) {
    for(auto sub_vector : v) {
        printV(sub_vector);
    }
}
