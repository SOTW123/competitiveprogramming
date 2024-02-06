#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

template<typename T>
void printV(vector<T> v);

int main() {
    
    int n;
    cin >> n;

    vector<ll> v(n,0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<ll> s(v.begin(), v.end());
    cout << s.size();

    
    return 0;
}

template<typename T>
void printV(vector<T> v)
{
    for(T value : v) 
    {
        cout << value << " 
    }
    cout << endl;
}