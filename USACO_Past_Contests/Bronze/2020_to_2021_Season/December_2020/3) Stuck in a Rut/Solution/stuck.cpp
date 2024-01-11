#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("stuck.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int N; 
    fin >> N;

    vector<array<int, 3>> north;
    vector<array<int, 3>> east;
    int infinity = 1e9;

    vector<pair<int, int>> pos(N);
    for(int i = 0; i < N; i++) {
        char d;
        fin >> d;
        pair<int, int> p;
        cin >> p.first >> p.second;

        array<int, 3> varr = {p.first, p.second, i};
        if(d == 'E') {
            east.push_back(varr);
        } else 
            north.push_back(varr);

        pos[i] = p;
    }

    vector<vector<int>> meetTime;
    for(auto nC : north) {
        for(auto eC : east) {
            int yT = eC[1] - nC[1];
            int xT = nC[0] - eC[0];

            if(xT == yT) {
                continue;
            }

            if(yT > xT && xT > 0) {
                meetTime.push_back({yT, nC[2], eC[2], 0});
            }
            else if(yT < xT && yT > 0) {
                meetTime.push_back({xT, eC[2], nC[2], 1});
            }

        }
    }

    sort(meetTime.begin(), meetTime.end());
    
    vector<int> ans(N, infinity);

    for(auto mt : meetTime) {
        if(ans[mt[2]] == infinity && ans[mt[1]] == infinity) {
            ans[mt[1]] == mt[0];
            continue;
        }
        if(ans[mt[1]] == infinity) {
            if(mt[3]) {
                int start = pos[mt[2]].second;
                int end = start + ans[mt[2]];

                if(pos[mt[1]].second >= start && pos[mt[1]].second <= end) {
                    ans[mt[1]] = mt[0];
                }
            }
            else {
                int start = pos[mt[2]].first;
                int end = start + ans[mt[2]];

                if(pos[mt[1]].first >= start && pos[mt[1]].first <= end) {
                    ans[mt[1]] = mt[0];
                }

            }
        }
    }

    for(auto v : ans) {
        if(v == infinity) {
            cout << "Infinity" << endl;
        } else {cout << v << endl;}
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
