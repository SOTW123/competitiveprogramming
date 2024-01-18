#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{	
	ll n;
	cin >> n;
	ll moves = 0;
	vector<ll> v(n);
	for(ll i = 0; i < n; i++)
	{
		cin >> v[i];
	}	
	for(ll i = 0; i < n-1; i++)
	{
		if(v[i+1] < v[i])
		{
			moves+=abs(v[i+1]-v[i]);
			v[i+1]+=abs(v[i+1]-v[i]);
		}
	}
	cout << moves << endl;
}
