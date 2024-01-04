#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

template<typename T>
void printV(vector<T> v) {
	cout << endl;
	for(T i : v) {
		cout << i << " ";
	}
	cout << endl;
}

ifstream fin("r.in");

void increment(int &a, bool &b) {
	if(b) {
		a++;
	}
}
int main() {
	string line;
	getline(cin, line);

	vector<int> A;
	vector<int> T;
	vector<int> G;
	vector<int> C;

	int n = line.size();

	int a = 0;
	int t = 0;
	int g = 0;
	int c = 0;

	for(int i = 0; i < n; i++) {
		if(line[i] == 'A') {
			A[a]++;
				if(line[i] != line[i+1]) {
					A.push_back(0);
					a++;
				}
		} else if(line[i] == 'T') {
			T[t]++;
				if(line[i] != line[i+1]) {
					T.push_back(0);
					t++;
				}
		} else if(line[i] == 'G') {
			G[g]++;
				if(line[i] != line[i+1]) {
					G.push_back(0);
					g++;
				}
		} else if(line[i] == 'C') {
			C[c]++;
				if(line[i] != line[i+1]) {
					C.push_back(0);
					c++;
				}
		}
		
	}
	

	return 0;
}
