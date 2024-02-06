/*
ID: siyamsz1
TASK: friday
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("friday.in");
ofstream fout("friday.out");

//#define fin cin
#define cout fout


int main() {
	vector<int> ans(7,0);
	
	int n;
	fin >> n;
	int days = 0;
	for(int i = 1900; i < 1900+n; i++) {
		for(int j = 1; j <= 12; j++) {
			int d = days;
			if(j==9 || j==4 || j==6 || j==11) {
				days += 30;
			} else if(j==2) {
				days += 28;
				if(i%100==0) {
					if(i % 400 == 0) {
						days++;
					}
					
				} else if((i%4==0)) {
					days++;
				}
			} else {
				days += 31;
			}
			
			d+=13;
			ans[d%7]++;
		}
	}
	for(int i = 6; i < 13; i++) {
		cout << ans[i % 7];
		if(i!=12) cout << " ";
	}
	cout << endl;
	return 0;	
}
