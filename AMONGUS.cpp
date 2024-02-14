/*
ID: siyamsz1
TASK: wormhole 
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

template<typename T> ll maxv(const vector<T> &a);
template<typename T> ll minv(const vector<T> &a);
template<typename T> void printv(const vector<T> &v);
template<typename T> void printvv(const vector<vector<T>> &v); 
template<typename T, typename U> void printvp(vector<pair<T,U>> &vp); 


ifstream fin("main.in");

// USACO.training
//ifstream din("wormhole.in");
//ofstream fout("wormhole.out");
//#define cout fout
//#define fin din

// CF
//#define fin cin


int main() {
	
}












template<typename T> ll maxv(const vector<T> &a) {
	ll n = a.size();
	ll mx = INT_MIN;
	for(ll i = 0; i < n; i++) {
		if(a[i] > mx) mx = a[i];
	}
	
	return mx;
}
template<typename T> ll minv(const vector<T> &a) {
    ll n = a.size();
    ll mn = INT_MAX;
    for(ll i = 0; i < n; i++) {
        if(a[i] < mn)
            mn = a[i];
    }
    return mn;
}
template<typename T> void printv(const vector<T> &v) {
	for(auto i : v) {
		cout << i << " ";
	}
	cout << endl;
}
template<typename T> void printvv(const vector<vector<T>> &v) {
	for(auto i : v) {
		printv(i);
	}
	cout << endl;
}
template<typename T, typename U> void printvp(vector<pair<T,U>> &vp) {
	for(auto p : vp) {
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
}
