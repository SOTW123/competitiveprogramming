/*
ID: siyamsz1
TASK: transform
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



ifstream fin("transform.in");
ofstream fout("transform.out");

#define cout fout
//#define fin cin
vector<vector<char>> reflect(vector<vector<char>> v) {
	int n = v.size();
	vector<vector<char>> output(n,vector<char>(n));
	for(int i = 0; i < n; i++)  {
		vector<char> temp(n);
		temp = v[i];
		reverse(temp.begin(), temp.end());
		output[i] = temp;
	}
	return output;
}
vector<vector<char>> rotate(vector<vector<char>> v) {
	int n = v.size();
	vector<vector<char>> output(n,vector<char>(n));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			output[i][j] = v[n-1-j][i]; // 02 -> 00
									// 01 -> 01
		}
	}
	return output;
}
void printvv(vector<vector<char>> &v) {
	for(auto r : v) {
		for(auto i : r) {
			cout << i << " ";
		}
		cout << endl;
	}
	cout << endl;
}
bool equals(vector<vector<char>> x, vector<vector<char>> y) {
	int n = x.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(x[i][j] != y[i][j]) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	int n;
	fin >> n;
	vector<vector<char>> original(n,vector<char>(n));
	vector<vector<char>> transformed(n,vector<char>(n));
   
    for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
       		fin >> original[i][j];    	
		}
	}  
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
        	fin >> transformed[i][j];    	
		}
	}  
	vector<vector<char>> rotate90 = rotate(original);
	vector<vector<char>> rotate180 = rotate(rotate90);
	vector<vector<char>> rotate270 = rotate(rotate180);
	vector<vector<char>> reflected = reflect(original);
	
	if(transformed==rotate90) {
		cout << 1 << endl;
	} else if(transformed==rotate180) {
		cout << 2 << endl;
	} else if(transformed==rotate270) {
		cout << 3 << endl;
	} else if(transformed==reflected) {
		cout << 4 << endl;
	} else if(transformed==rotate(reflected) 
			|| 
			transformed==rotate(rotate(reflected))
			||
			transformed==rotate(rotate(rotate(reflected)))) {
		cout << 5 << endl;
	} else if(transformed==original) {
		cout << 6 << endl;
	} else {
		cout << 7 << endl;
	}
	

}
