#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("ball.in");
ofstream fout("ball.out");

template<typename T> void printv(vector<T> &v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
template<typename T> void printvv(vector<vector<T>> &v) {
    for(auto sub_vector : v) {
        printV(sub_vector);
    }
}
void printpv(vector<pair<int,int>> &vp) {
    for(auto p : vp) {
        cout  << p.first << " " << p.second << endl;
    }
}

//#define fin cin
int main() {
    int n;
    fin >> n;
    int location;
    fin >> location;

    vector<pair<int,int>> moves(n);
    vector<bool> broken(n,0);
    for(int i = 0; i < n; i++) {
        fin >> moves[i].first;
        fin >> moves[i].second;
    }


    int curr = 0;
    int power = 1;
    int direction = 1;
    int ans = 0; // targets broken
    
    while((location >= 1 && location <= n) && curr < n) {
        int q = moves[location-1].first;
        if(q) {
            int v = moves[location-1].second;
            if(power >= v) {
                if(broken[location-1]) {

                } else {
                    ans++;
                    broken[location-1] = 1;
                }
            }
        } else {
            int v = moves[location-1].second;
            power+=v;
            direction *= -1;
        }
        location+=power*direction;
        curr++;
    }
    cout << ans << endl;
    return 0;
}



