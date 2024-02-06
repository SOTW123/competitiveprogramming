#include <bits/stdc++.h>

using namespace std;

ifstream fin("a.in");

int main() {
    int t;
    cin >> t;
    vector<int> a(100000, 0);
    for(int i = 0; i < t; i++)
    {
        int q; 
        cin >> q;
        if(q == 0)
        {
            int k;
            cin >> k;
            int v;
            cin >> v;
            a[k] = v;
        } 
        else if(q == 1)
        {
            int k;
            cin >> k;
            cout << a[k] << endl;
        }
    }
    return 0;
}