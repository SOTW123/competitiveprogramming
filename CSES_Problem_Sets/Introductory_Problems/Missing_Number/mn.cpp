#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

typedef long long ll;

ifstream fin("mn.in");

void printV(vector<ll> &a);
void insertZero(vector<ll> &a);
int solve(vector<ll> &p, vector<ll> &m);

int main() {
	ll size;
	cin >> size;
	
	// vector perfect which is the vector if everything was nice
	// vectory missing which is the vector we have... messy and missing a number
	
	vector<ll> perfect(size, 0);
	int psi = perfect.size();
	for(int i = 0; i < psi; i++) {
		perfect[i] = i+1;
	}
	
	// vector perfect is set
	
	vector<ll> missing(size-1, 0); // we'll find the place where the value after it is +2 and not +1. add a zero there and compare perfect and missing. when a difference is found
	//printV(perfect);
	int msi = missing.size();
	for(int i = 0; i < msi; i++) {
		cin >> missing[i];
	}
	sort(missing.begin(), missing.end());
	insertZero(missing);	
	//printV(missing);
	
	cout << endl << solve(perfect, missing) << endl;
	//printV(missing);
	// learn to make a template cpp
	// add some useful methods to that
	// similar to william lin idek what the hell he does
	//	learn about templates in cpp as well as gvim
	//
	return 0;
}

void printV(vector<ll> &a) {
	for(ll i : a) {
		cout << i << " ";
	}
}
void insertZero(vector<ll> &a) {
	int vsize = a.size();
	bool placed = false;
	for(int i = 0; i < vsize; i++) {
		if(a[i]+1 != a[i+1]) {
			a.insert(a.begin()+i+1,0);
			placed = true;	
		}
		if(placed) {
			break;
		}
	}
}
int solve(vector<ll> &p, vector<ll> &m) {
	int size = p.size();
	int gone = 0;
	bool filled = false;
	for(int i = 0; i < size; i++) {
		if(p[i] != m[i]) {
			m[i] = gone = p[i];
			filled = true;
			//cout << m[i] << ",";
			//cout << p[i] << ",";
			//cout << gone << ".";
		}
		if(filled) {
			break;
		}
	}

	return gone;
}
