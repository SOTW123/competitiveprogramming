#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ifstream fin("college.in");

template<typename T>
void printV(vector<T> v);

void isQualify(vector<ll> &participating, ll charge) {

}

int main() {
	ll N;
	cin >> N;
	
	vector<ll> v(N, 0);
	for(ll i = 0; i < N; i++) {
		cin >> v[i];
	}
	
	ll min = *min_element(v.begin(), v.end());
	ll max = *max_element(v.begin(), v.end());
	
	vector<ll> p; // participating
	 // should be p.size() tbh
				   // p should be empty after every use tbh
	ll profit = 0;
	ll currMax = 0;
	ll count = 0;
	//cout << N;
	//cout << min << ", " << max << endl;
   	//printV(v);
	//cout << ".........................................";	
	for(ll i = min; i < max; i++) {
		ll currprofit;
		ll currcount;
		// if profit greater count = 0; 
		for(ll j = 0; j < N; j++)  {
			if(v[j] >= i) {
				p.push_back(v[j]);
				currprofit = i;
				
				//cout << "cp" << currprofit << ",";
			} else { currprofit = 0; }
		}
		//cout << count << profit << currMax << "." << endl;
		//cout << p.size();
		currcount = p.size();
		if(currcount * currprofit > currMax) {
			//cout << "reached" << endl;
			currMax = count * currprofit;
			profit = currprofit;
			count = currcount;
			currcount = 0;
		}

		//printV(p);
		p.clear();
	}
	cout << currMax << " " << profit << endl;

	return 0;
}

template<typename T>
void printV(vector<T> v) {
	for(T value : v) {
		cout << value << " ";
	}
	cout << endl;
}
