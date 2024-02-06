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
	long long p;
	fin >> p;
	map<string, long double> mymap;
	vector<string> order(p);
	for(long long i = 0; i < p; i++) {
		string s;
		fin >> s;
		order[i] = s;
		mymap[s] = 0;
	}	

		while(!fin.eof()) {
			string s;
			fin >> s;
			long double m, n;
			fin >> m >> n;
			mymap[s] -= m;
			long double exact = m / n;
			long long rounded = m / n;
			if(n==0) exact = 0.0;
			if(n==0) rounded = 0;
			mymap[s] += (exact-rounded)*n;
			for(long long i = 0; i < n; i++) {
				string p;
				fin >> p;
				mymap[p] += rounded;
			}
		}
	
	
	for(auto s : order) {
		cout << s << " " << round(mymap[s]) << endl;
	}
	


	return 0;	
}
