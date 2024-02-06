#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("maj.in");
ofstream fout("maj.out");

template<typename T> void printV(vector<T> &v);
template<typename T> int maxv(const vector<T> &v) {
    int mx = 0;
    int n = v.size();
    for(int i = 0; i < n; i++) {
        if(v[i] > mx) {
            mx = v[i];
        }
    }
    return mx;
}
// count frequences
vector<int> freq(vector<int> &f){
    vector<int> ret;
    multiset<int> ms(f.begin(), f.end());
    unordered_set<int> us(f.begin(), f.end());
    for(auto i = us.begin(); i != us.end(); i++) {
        ret.push_back(ms.count(*i));
    }
    return ret;
}
// is there a majority?

bool majority(vector<int> &v) {
    vector<int> f = freq(v);
    int counter = 0;
    int n = v.size();
    for(int i = 0; i < n-1; i++) {
        if(f[i] == f[i+1]) {
            counter++;
        }
    }
    if(counter==0)
        return true;
    
    return false;
}
auto solve() {
    int n;  
    fin >> n;
    if(n < 3) {cout << -1 << endl; return;}
    
    vector<int> ans;
    int max_subset = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) fin >> v[i];

    int K = 3;
    for(int i = 0; K <= n; i++, K++) {
        vector<int> sub(v.begin(), v.begin()+K);
        if(majority(sub)) {
            max_subset = K;
            ans.push_back(maxv(freq(sub))+1);
        } else {
            ans.push_back(-1);
        }
        printV(sub);
        cout << majority(sub) << endl;
    }
    vector<int> sub(v.begin(), v.begin()+max_subset);
    int a = maxv(freq(sub));
    cout << a << endl;
    cout << "K:" << K << endl;
    //printV(ans);

}

int main() {
    int t;
    fin >> t;
    for(int i = 0; i < t; i++) solve();
    return 0;
}


template<typename T> void printV(vector<T> &v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
