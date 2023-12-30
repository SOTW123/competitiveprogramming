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

int main() {
	string line;
	getline(cin, line);
	
	vector<int> v(4,0);
	// ATCG
	int sz = line.size();
	for(int i = 0; i < sz; i++) {
		switch(line[i]) {
			case 'A':
				v[0]++;
				break;
			case 'T':
				v[1]++;
				break;
			case 'C':
				v[2]++;
				break;
			case 'G':
				v[3]++;
				break;
		}		
	}	
	auto iterator = max_element(v.begin(), v.end());
	
	cout << endl << *iterator;

	return 0;
}
