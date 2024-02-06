#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

tyepdef long long ll;

int main() {
	vector<ll> v(7,0);
	vector<ll> abc;
	
	for(int i = 0; i < 7; i++) {
		fin >> v[i];
	}

	int sum = *max_element(v.begin(), v.end());
	
	for(int i = 0; i < 7; i++) {
		for(int j = 0; j < 7; j++) {
			for(int k = 0; k < 7; k++) {
				if(v[i] + v[j] + v[k] == sum && i != j && i != k && j != k) {
					abc = {v[i],  v[j], v[k]};
				}
			}
		}
	}

	sort(abc.begin(), abc.end());

	cout << abc[0] << abc[1] << abc[2] << endl;

	return 0;
}
