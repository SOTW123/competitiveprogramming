/*
ID: siyamsz1
TASK: beads
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin("beads.in");
ofstream fout("beads.out");

#define fin cin
//#define cout fout
template<typename T>
void printv(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}



int rcheck(vector<char> &v, char c, int i) {
	bool reached = 0;
	int j = 0;
	int counter = 0;
	while(reached==0 && j < i) {
		if(v[j]==c || v[j] == 'w') {
			counter++;
		} else 
			reached = 1;
		
		j++;
	}
	return counter;
}
int lcheck(vector<char> &v, char c, int i) {
	bool reached = 0;
	int j = i;
	int counter = 0;
	while(reached==0 && j > 0) {
		if(v[j-1]==c || v[j-1] == 'w') {
			counter++;
		} else 
			reached = 1;
		
		j--;
	}
	return counter;
}
int main() {
	int n;
	fin >> n;
	string s;
	fin >> s;
	
	int ans = -1;
	int lv = 0;
	int rv = 0;
	int lb = 0;
	int lr = 0;
	for(int i = 1; i < n; i++) {
		vector<char> left(s.begin(), s.begin()+i);
		vector<char> right(s.begin()+i, s.end());
		
		
		int leftblue = lcheck(left, 'b', i);
		
		int leftred = lcheck(left, 'r', i);
		
		lb = max(leftblue, lb);
		lr = max(leftred, lr);
		lv = max(lb+lr,lv);
		ans = max(lv, ans);
		
		/*
		int leftblue = lcheck(left, 'b', i);
		int leftred = lcheck(left, 'r', i);
		int leftval = max(leftblue,leftred);
		
		int rightblue = rcheck(right, 'b', n-i);
		int rightred = rcheck(right, 'r', n-i);
		int rightval = max(rightblue, rightred);
		
		cout << leftblue << " " << leftred << endl;
		cout << rightblue << " " << rightred << endl;
		cout << endl;
		
		lv = max(leftval, lv);
		rv = max(rightval, rv);
		ans = max(ans, lv+rv);
		*/
	}
	cout << ans << endl;
	
}
