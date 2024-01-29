#include <bits/stdc++.h>

using namespace std;


template<typename T> void printv(vector<T> v); // prints a 1d vector
template<typename T> void printvv(vector<vector<T>> v); // prints a 2d vector
template<typename T> int maxv(vector<T> &v); // returns the max of 1d vector
template<typename T, typename K> void printvp(vector<pair<T,K> &vp);//prints vector of pairs

#define ll long long

void solve() {
    
}
int main() {
    //int t;
    //fin >> t;
    //for(int i = 0; i < t; i++) solve();
    //solve();
}

















template<typename T> void printv(vector<T> v) {
    for(auto e : v )
        cout << e << ", ";
    cout << endl;
}
template<typename T> void printvv(vector<vector<T>> v) {
    for(auto subv : v) {
        for(auto e : subv) {
            cout << e << ", ";
        }
        cout << endl;
    }
    cout << endl;
}
template<typename T> int maxv(vector<T> &v) {
	int n = v.size();
	int mx = -1000000;
	for(int i = 0; i < n; i++) {
		if(v[i]>mx) 
			mx = v[i];
	}
	return mx;
}
template<typename T, typename K> void printvp(vector<pair<T,K> &vp) {
	for(auto p : vp) {
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
}
