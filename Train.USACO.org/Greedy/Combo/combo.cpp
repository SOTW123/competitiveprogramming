/*
ID: siyamsz1
TASK: combo
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

template<typename T> ll maxv(const vector<T> &a);
template<typename T> void printv(const vector<T> &v);
template<typename T> void printvv(const vector<vector<T>> &v); 
template<typename T, typename U> void printvp(vector<pair<T,U>> &vp); 


ifstream din("combo.in");
ofstream fout("combo.out");

#define cout fout
#define fin din

unordered_set<int> eq(int n, int x, vector<int> list) {
	unordered_set<int> output;
	for(int i = -2; i <= 2; i++) {
		int elem = list[((n-1)+(x+i))%n];
		output.insert(elem);
	}
	return output;
}
int main() {
	int N;
	fin >> N;
	
	vector<int> fj(3);
	for(int i = 0; i < 3; i++) fin >> fj[i];
	vector<int> m(3);
	for(int i = 0; i < 3; i++) fin >> m[i];

	vector<int> list(N);
	for(int i = 0; i < N; i++) {
		list[i] = i + 1;
	}

	vector<unordered_set<int>> fjb;
	for(int j = 0; j < 3; j++) {
		unordered_set<int> v = eq(N,fj[j],list);
		//for(auto i : v) {
		//	cout << i << " ";
		//}
		fjb.push_back(v);
		//cout << endl;
	}

	vector<unordered_set<int>> mb;
	for(int j = 0; j < 3; j++) {
		unordered_set<int> v = eq(N,m[j],list);
		//for(auto i : v) {
		//	cout << i << " ";
		//}
		mb.push_back(v);
	}
	int counter = 0;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			for(int k = 1; k <= N; k++) {
				if(fjb[0].count(i)>0 &&
				   fjb[1].count(j)>0 &&
				   fjb[2].count(k)>0) 
				{
				counter++;	
				}
				else if(mb[0].count(i)>0 &&
				   mb[1].count(j)>0 &&
				   mb[2].count(k)>0) 
				{
				counter++;	
				}

				
			}
		}

	}
	cout << counter << endl;
}












template<typename T> ll maxv(const vector<T> &a) {
	ll n = a.size();
	ll mx = -1;
	for(ll i = 0; i < n; i++) {
		if(a[i] > mx) mx = a[i];
	}
	
	return mx;
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
