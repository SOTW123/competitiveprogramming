/*
ID: siyamsz1
TASK: milk
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



ifstream fin("milk.in");
ofstream fout("milk.out");

#define cout fout
//#define fin cin
int main() {
	int units, M;
	fin >> units >> M;
	int start = units;
	int price = 0;
	vector<pair<int,int>> up(M);
	for(int i = 0; i < M; i++)fin >> up[i].first >> up[i].second;
	
	sort(up.begin(), up.end());
	int i = 0;
	while(units > 0) {
		int e = 0;
		if(units-up[i].second < 0) {
			e = up[i].second - units;
		}
		price+=up[i].first * (up[i].second-e);
		units-=up[i].second;
		i++;
	}
	//int	pos = abs(units);
     	
	//price -= (up[i].second-pos) * up[i].first;
	cout << price << endl;	
}
