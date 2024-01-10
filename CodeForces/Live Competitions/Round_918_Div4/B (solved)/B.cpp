#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ifstream fin("B.in");


int main() {
	ll N;
	cin >> N;

	cin.ignore();
	
	for(int i = 0; i < N*3; i++) {
		string line;
		getline(cin, line);
		auto q = line.find('?');
		if(q != string::npos) {
			bool A = true;
			bool B = true;
			bool C = true;

			auto a = line.find('A');
			auto b = line.find('B');
			auto c = line.find('C');
			
			if(a == string::npos) {
				cout << "A";
			}
			else if(b == string::npos) {
				cout << "B";
			}
			else if(c == string::npos) {
				cout << "C";
			}

		} else { continue; }
		cout << endl;
	}
	return 0;
}

