#include <bits/stdc++.h>

using namespace std;

ifstream fin("k.in");

template<typename T>
void printV(vector<T> v)
{
	for(T value : v)
	{
		cout << value << " ";
	}
	cout << endl;
}
int main()
{
	int n;
	fin >> n;

	vector<int> weights(n*2, 0);

	for(int i = 0; i < n * 2; i++)
	{
		fin >> weights[i];
	}
	sort(weights.begin(), weights.end());
    printV(weights);
	vector<int> distances((n*2)-1, 0);
    int instability = 0;
	while(weights.size() > 2)
    {   
        
        int min = INT_MAX;
        //cout << "1";
        int m = weights.size();
        for(int i = 0; i < m-1; i++) 
        {
            distances[i] = abs(weights[i+1]-weights[i]);
            min = std::min(min, distances[i]);
            //cout << i << " ";
        }
        //cout << endl;
        instability += min;
        //cout << "i" << instability;
        //cout << min << endl;
        int index = std::distance(distances.begin(), std::find(distances.begin(),distances.end(), min));
        weights.erase(weights.begin()+index, weights.begin()+index+2);
        printV(weights);
        // distances[0] is weights: 0 & 1
        // distances[1] is weights: 1 & 2
        // distances[2] is weights: 2 & 3
        // distances[m] is weights: m & m+1
    }	
    //printV(weights);
	//printV(distances);
	cout << instability << endl;
	return 0;
}