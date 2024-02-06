/*
ID: siyamsz1
TASK: dualpal
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



ifstream fin("transform.in");
ofstream fout("transform.out");

#define cout fout
//#define fin cin


string baseconvert(int x, int b) {
	string s = "";
	while(x != 0) {
    	int r = x % b;
        s = to_string(r) + s;
		x /= b;
	}		
	return s;
}

int main() {
	int n, s;
	fin >> n >> s;

	int p = 0;
	int i = s+1;
	while(p != n) {
        int counter = 0;
		for(int j = 2; j <= 10; j++) {
			string ans = baseconvert(i,j);
			string x = ans;
			reverse(x.begin(), x.end());
			if(ans==x) {
				counter++;
			}
			
		}		
		if(counter >= 2) {
			cout << i << endl;
			p++;
		}
		i++;
	}
	
	
	
}
