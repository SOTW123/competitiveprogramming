#include <bits/stdc++.h>

using namespace std;


int main() {
    string s = "HELLO";
    vector<char> v(s.begin(), s.begin()+1);
    for(auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string lca = "abcdefghijklmnopqrstuvwxyz"; // lowercase alphabet
												string uca = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // uppercase alphabet
		string line;
		cin >> line;
		string ans = "";
		int n = line.size();
		string curr = "";
		for(int j = 0; j < n; j++)
		{
			curr += line[j];
			if(line[j] == 'B')
			{
				int f = curr.find
			}
			else if(line[j] == 'b')
			{

			}
			else {
				ans+=line[j];
			}
		}
	}	
}
