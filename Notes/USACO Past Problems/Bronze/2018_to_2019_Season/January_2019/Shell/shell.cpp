#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("shell.in");
ofstream fout("shell.out");

template<typename T>
void printV(vector<T> v);

int main() {
    int N;
    fin >> N;
    vector<char> shells = {'c', 't', 'r'};
    vector<char> g_list;
    for(int i = 0; i < N; i++) {
        int x, y;
        fin >> x >> y;
        swap(shells[x-1], shells[y-1]);
        int g;
        fin >> g;
        g_list.push_back(shells[g-1]);
    }

    int c_count = count(g_list.begin(), g_list.end(), 'c');
    int t_count = count(g_list.begin(), g_list.end(), 't');
    int r_count = count(g_list.begin(), g_list.end(), 'r');
    fout << max({c_count, t_count, r_count});
 
    // if 
    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
