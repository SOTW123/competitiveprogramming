
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ifstream fin("D.in");

template<typename T>
void printV(vector<T> v);

int main() {
	int t; // test cases
	fin >> t;

	string dot = ".";
	for(int i = 0; i < t; i++) {
		int n; // length of the word
		fin >> n;
		cout << n;
		string c = ""; // converted
		for(int j = 0; j < n; j++) {
			char curr;
			fin >> curr;
			if(curr == 'a' || curr == 'e') {
				c += "V";
			} else if(curr == 'b' || curr == 'c' || curr == 'd') {
				c += "C";
			}
			
		}
		
		for(int j = 0; j < n;) {
			char s1 = c[j];
			char s2 = c[j+1];
			char s3 = c[j+2];
			char s4 = ' ';
			if(j+3 < n) {
				s4 = c[j+3];
			}

			if(s4 == 'C') {
				c.insert(j+1, dot);
				j+=3;
				//cout << "!";
				//c.erase(j,j+3);
			} else if(s4 == 'V') {
				c.insert(j+2, dot);
				j+=4;
				//cout << "!";
				//c.erase(j,j+4);
			} else if(s4 == ' '){
				break;
			}	
			
		}	
		cout << c << endl;
	}
		


	return 0;
}


template<typename T>
void printV(vector<T> v) {
	for(T value : v) {
		cout << value << " ";
	}
	cout << endl;
}
