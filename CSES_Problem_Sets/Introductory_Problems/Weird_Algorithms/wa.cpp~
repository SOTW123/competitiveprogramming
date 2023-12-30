#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("wa.in");

typedef long long ll;

void solve(ll* a);


int main() {
	ll n;
	cin >> n;

	cout << n << " ";
	while(n != 1) {
		solve(&n);
	}
	
	cout << endl;


	return 0;
}

void solve(ll* a) {		
	if(*a % 2 == 0) {
		*a /= 2;
	} else if(*a % 2 != 0) {
		*a *= 3;
		++*a;
	}	
	cout << *a << " "; 
}
