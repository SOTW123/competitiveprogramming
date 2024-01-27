/*
ID: siyamsz1
TASK: gift1
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("gift1.in");
ofstream fout("gift1.out");
//#define cout fout

int main() {
	// just need to handle edge cases eg. m = 0 || n = 0
	int p;
	fin >> p;
	map<string, int> mymap;
	for(int i = 0; i < p; i++) {
		string s;
		fin >> s;
		mymap[s] = 0;
	}	
	while(fin) {
		string s;
		fin >> s;
		double m, n;
		fin >> m >> n;
		mymap[s] -= m;
		double exact = m / n;
		int rounded = m / n;
		mymap[s] += (exact-rounded)*n;
		for(int i = 0; i < n; i++) {
			string p;
			fin >> p;
			mymap[p] += rounded;
		}
	}
	for(auto i = mymap.begin(); i != mymap.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}
	


	return 0;	
}
