/*
ID: siyamsz1
TASK: crypt1 
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


//ifstream fin("main.in");
ifstream din("crypt1.in");
ofstream fout("crypt1.out");

#define cout fout
#define fin din
bool valid(int &x, unordered_set<int> &uns) {
	string s = to_string(x);
	int n = s.size();
	vector<int> digits(n);
	for(int i = 0; i < n; i++) {
		digits[i] = s[i]-'0'; 
		if(uns.count(digits[i])==0) {
			return false;
		}
	}
	return true;
}
int len(int &p) {
	string s = to_string(p);
	return s.size();
}
int main() {
	int n;
	fin >> n;
	vector<int> list(n);
	unordered_set<int> uset(n);
	for(int i = 0; i < n; i++) {
		int a;
		fin >> a;
		list[i] = a;
		uset.insert(a);
	}
	int counter = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++) {
				for(int l = 0; l < n; l++) {
					for(int m = 0; m < n; m++) {
						int a = list[i];
						int b = list[j];
						int c = list[k];
						int d = list[l];
						int e = list[m];
						int abc = stoi(to_string(a) + to_string(b) + to_string(c));
						int p1 = abc * e;
						int p2 = abc * d;
						int sum = p1 + (10*p2);
						if(len(p1) != 3 || len(p2) != 3) {
							continue;
						}
						if(len(sum) != 4) {
							continue;
						}
						if(valid(p1,uset)==0 || valid(p2,uset)==0) {
							continue;
						}
						if(valid(sum,uset)==0) {
							continue;
						}
						counter++;
					}
				}	
			}
		}
	}
	cout << counter << endl;
}
