#include <bits/stdc++.h>

using namespace std;

ifstream fin("herding.in");
ofstream fout("herding.out");


int main() {
    int b, e, m;
    fin >> b >> e >> m;
    if(m-e == 1 && e-b == 1) {
        fout << 0 << endl << 0 << endl;
        return 0;
    }
    int d1, d2;
    int max1 = 0;
    int min1 = 0;

    d1 = e-b;
    d2 = m-e;
    min1 = min(d1,d2);
    if(min1 > 2) {
        min1 = 3;
    }
    if(d1 == 1) {
        min1 = 3;
    } else if(d2 == 1) {
        min1 = 3;
    }
    max1 = max(d1,d2);
    fout << min1-1 << endl;
    fout << max1-1 << endl;
    return 0;
}

