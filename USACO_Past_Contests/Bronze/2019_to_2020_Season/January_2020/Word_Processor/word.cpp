/*
ID: siyamsz1
TASK: 
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

template<typename T> void printv(const vector<T> &v);



// USACO.training
ifstream fin("main.in");
ifstream din("word.in");
ofstream fout("word.out");
//#define cout fout
//#define fin din

// CF
//#define fin cin
vector<string> make(string &x) {
	string curr = "";
	vector<string> ret;
	for(char c : x) {
		if(c == ' ') {
			ret.push_back(curr);
			curr = "";
		} else
			curr += c;
	}
	return ret;
}
bool contains(string &x, char c) {
	unordered_set<char> s(x.begin(), x.end());
	return s.count(c) != 0;
}
int main() {
	int n;
	int k;
	fin >> n;
	fin >> k;
	fin.ignore();
	string s;
	getline(fin, s);
	s += ' ';	
	vector<string> v = make(s);
	
	int curr = 0;
	string temp = "";
	for(int i = 0; i < n; i++) {
		if(curr + v[i].size() > k) {
			//cout << v[i];
			//temp += v[i];
			//v[i-1] += '\n';
			v[i-1] += '\n';
			curr = 0;
		} 	
		else {
			//int n = v[i-1].size();
			//v[i-1].erase(n-1,1);
			//v[i] += '\n';
			//cout << endl << v[i];
			//curr = 0;
		}
		//cout << " ";
		curr += v[i].size();
		//cout << curr << ",";	
	}
	for(int i = 0; i < n; i++) {
		if(contains(v[i],'\n')) {
			
		} else {
			v[i] += ' ';
		}	
	}
	printv(v);
}

