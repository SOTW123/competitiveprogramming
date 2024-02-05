/*
ID: siyamsz1
TASK: milk2
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("milk2.in");
ofstream fout("milk2.out");

#define fin cin
//#define cout fout

template<typename T> void printv(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}

int maxv(vector<int> &v) {
	int mx = -1000000;
	int n = v.size();
	for(int i = 0; i < n; i++) {
		if(v[i] > mx)
			mx = v[i];
	}
	return mx;
}



int main() {
	int n;
	fin >> n;
	
	int mdo, mdn;
	mdo = mdn = 0;
	vector<pair<int,int>> mt(n);
	for(int i = 0; i < n; i++) {
		fin >> mt[i].first >> mt[i].second;	
	}

	int mn = mt[0].first;
	int mx = mt[n-1].second;
	for(int i = 1; i < n; i++) {
		
		if(mt[i-1].second > mt[i].first && mt[i].second > mt[i-1].first) {
			mn = min(mt[i-1].first, mn);
			mx = max(mt[i].second, mx);
			if(mt[i+1].first > mt[i].second && i < n-1) {
				mdo = max(mdo, mx-mn);
			}
		} else {
			mdn = max(mdn, mt[i].first-mt[i-1].second);
		}
		cout << mn << " " << mx << endl;
		cout << mdo << " " << mdn << endl;
		cout << endl;
	}
	//cout << mdo << " " << mdn << endl;
	
	
}
