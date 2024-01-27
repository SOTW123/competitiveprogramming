/*
ID: siyamsz1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("main.in");
ofstream fout("gift1.out");
//#define cout fout

void solve(map<string,int> &ma) {
	string s;
	fin >> s;
	int m, n;
	// aka money to transfer, num of people
	fin >> m >> n;
	ma[s] -= m;
	double exact = m / n;
	int rounded = m / n;
	ma[s] += (exact-rounded)*n;
	for(int i = 0; i < n; i++) {
		string p;
		fin >> p;
		ma[p] += rounded;
	}
}
int main() {
	int p;
	fin >> p;
	map<string, int> m;
	for(int i = 0; i < p; i++) {
		string s;
		fin >> s;
		m[s] = 0;
	}	
	while(fin) {
		cout << 1 << endl;
		solve(m);
	}
	


	return 0;	
}
