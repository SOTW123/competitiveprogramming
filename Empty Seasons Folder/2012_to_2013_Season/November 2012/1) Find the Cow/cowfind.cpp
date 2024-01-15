#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("cowfind.in");
ofstream fout("cowfind.out");

template<typename T>
void printV(vector<T> v);

int main() {
    string s;
    getline(fin, s);

    int ans = 0;
    int count = 0;
    int len = s.size();
    for(int i = 0; i < len; i++) {
        if(s[i] == '(' && s[i+1] == '(') {
            ans += count;
        } else if(s[i] == ')' && s[i+1] == ')') {
            ++count;
        }
    }
    cout << ans << "," << count << endl;
    cout << ans/2 * count;
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
