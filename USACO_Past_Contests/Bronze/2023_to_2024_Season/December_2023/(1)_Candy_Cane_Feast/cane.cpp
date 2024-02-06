/*
ID: siyamsz1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("ride.in");
ofstream fout("gift1.out");
//#define cout fout
#define fin cin
#define ll long long
int main() {
	int n, m;
	fin >> n >> m;
	vector<ll> cow(n);
	for(int i = 0; i < n; i++) fin >> cow[i];

	for(int i = 0; i < m; i++) {
		ll cane;
		fin >> cane;
		ll ate = 0;
		for(int j = 0; j < n && ate < cane; j++) {
			ll eat = min(cane, cow[j]) - ate;
			if(eat > 0) {
				cow[j]+=eat;
				ate+=eat;
			}
		}	
	}	
	for(auto i : cow) {
		cout << i << endl;
	}
}
