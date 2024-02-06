/*
ID: siyamsz1
TASK: namenum
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



ifstream din("dict.txt");
ifstream fin("namenum.in");
ofstream fout("namenum.out");

#define cout fout
//#define fin cin

vector<string> ans;

int main() {
	string s;
	fin >> s;
	
	int n = s.size();
	
	unordered_set<char> two = {'A', 'B', 'C'};
    unordered_set<char> three = {'D', 'E', 'F'};
    unordered_set<char> four = {'G', 'H', 'I'};
    unordered_set<char> five = {'J', 'K', 'L'};
    unordered_set<char> six = {'M', 'N', 'O'};
    unordered_set<char> seven = {'P', 'R', 'S'};
    unordered_set<char> eight = {'T', 'U', 'V'};
    unordered_set<char> nine = {'W', 'X', 'Y'};
	vector<unordered_set<char>> keypad = {two,three,four,five,six,seven,eight,nine};

	vector<string> names;
	
	while(!din.eof()) {
		string x; 
		din >> x;

		if(x.size()!=n) continue;
		int counter = 0;
		for(int i = 0; i < n; i++) { 
			if(keypad[s[i]-'0'-2].count(x[i])==0) {
				break;
			} else {
				counter++;
				continue;
			}
		}
		if(counter==n)
			names.push_back(x);
		
	}	
	if(!names.empty()) {
		int m = names.size();
		sort(names.begin(), names.end());
		for(int i = 0; i < m; i++) {
			cout << names[i] << endl;
		}	
	} else {
		cout << "NONE" << endl;
	}
	

}
