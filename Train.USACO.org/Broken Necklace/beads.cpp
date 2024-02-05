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



int rightcheck(vector<char> &v, char c, int i, vector<bool> &tracker) {
	bool reached = 0;
	int j = i;
	int counter = 0;
	while(reached==0 && j > 0) {
		if((v[j-1]==c || v[j-1]=='w') && tracker[j-1]==0) {
			tracker[j-1]=1;
			counter++;
		} else
			reached = 1;
		
		j--;
	}
	return counter;
}
int leftcheck(vector<char> &v, char c, int i, vector<bool> &tracker) {
	bool reached = false;
	int j = 0;
	int counter = 0;
	while((reached==0 && j < i) && tracker[j]==0) {
		if(v[j]==c || v[j]=='w') {
			tracker[j]=1;
			counter++;
		} else
			reached = true;
			
		j++;
	}
	return counter;
}
bool duplicate(vector<char> &v) {
	int n = v.size();
	
	for(int i = 1; i < n; i++) {
		if(v[i-1]!=v[i])
			return false;
	}
	return true;
}
int main() {
	int n;
	fin >> n;
	string s;
	fin >> s;
	
	int ans = 0;
	vector<char> necklace(s.begin(), s.end());
	for(int i = 0; i < n; i++) {
		vector<char> cut;
		for(int j = i; j < n + i; j++) {
			cut.push_back(necklace[j%n]);
		}
		
		vector<bool> tracker(n,0);
		int left = max(leftcheck(cut, 'r', n, tracker),leftcheck(cut, 'b', n, tracker));
		int right = max(rightcheck(cut, 'r', n, tracker),rightcheck(cut,'b',n, tracker));
		ans = max(ans, left+right);
		 // count from left
		 // count from right
	}
	
	cout << ans << endl;
	
}
