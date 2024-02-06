#include <bits/stdc++.h>

using namespace std;

int main()
{
	string line;
	getline(cin, line);

	int n = line.size();
	int ans = 1;	
	vector<int> v;
	for(int i = 0; i < n-1; i++)
	{
		if(line[i] == line[i+1])
		{
			ans++;
		} else {		
			v.push_back(ans);
			ans = 1;
		}
						
	}
	v.push_back(ans);
	ans = *max_element(v.begin(), v.end());
	cout << ans << endl;
}
