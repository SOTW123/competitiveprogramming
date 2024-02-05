/*
ID: siyamsz1
TASK: barn1 
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

template<typename T> ll maxv(const vector<T> &a) {
	ll n = a.size();
	ll mx = -1;
	for(ll i = 0; i < n; i++) {
		if(a[i] > mx) mx = a[i];
	}
	
	return mx;
}



ifstream fin("barn1.in");
ofstream fout("barn1.out");

#define cout fout
//#define fin cin

bool comparePairs(const pair<int, int> &a, const pair<int, int> &b) {
    // Sort in decreasing order based on the first element of the pair
    return a.first > b.first;
}
int main() {
	int m, s, c;
	fin >> m >> s >> c;
	vector<int> stalls(c);
	vector<pair<int,int>> d(c-1);
	for(int i = 0; i < c; i++) fin >> stalls[i];
	sort(stalls.begin(), stalls.end());
	for(int i = 0; i < c-1; i++) {
		d[i].first = stalls[i+1]-stalls[i];
		d[i].second = i;
	}

	
	if(m==1) {
		int total = 0;
		for(int i = 0; i < c-1; i++) {
			total+=d[i].first;
		}
		cout << total+1 << endl;

		return 0;
	}	
	sort(d.begin(), d.end());
	
	if(m > c) {
		cout << c << endl;
		return 0;
	}
	 
	
	vector<pair<int,int>> sub(d.end()-m+1, d.end());
	int total = stalls[c-1]-stalls[0]+m;
	int n = sub.size();
	
	
	
	for(int i = 0; i < n; i++) {
		total-=sub[i].first;

	}
	cout << total << endl;
}
