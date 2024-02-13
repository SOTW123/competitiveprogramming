/*
ID: siyamsz1
TASK: wormhole 
LANG: C++                 
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

template<typename T> ll maxv(const vector<T> &a);
template<typename T> void printv(const vector<T> &v);
template<typename T> void printvv(const vector<vector<T>> &v); 
template<typename T, typename U> void printvp(vector<pair<T,U>> &vp); 


ifstream fin("main.in");
//ifstream din("wormhole.in");
//ofstream fout("wormhole.out");
//#define cout fout
//CF|#define fin cin

class CountingRooms {
	int row, col;
	int ans = 0;
	vector<vector<bool>> visited(row, vector<bool>(col,0));
	int solve(vector<vector<char>> &grid) {
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < col; j++) {
				if(grid[i][j] = '#') {
					visited[i][j] = 1;
				}
				if(grid[i][j] = '.' && visited[i][j]==0) {
					visited[i][j] = 1;
					ans++;					
					dfs(grid, i, j);
				}
			}
		}
	}
	void dfs(vector<vector<char>> &grid, int r, int c) {
		// 1, 1
		char up = grid[r-1][c] // up 0,1
		char down = grid[r+1][c] // down 2,1
		char left = grid[r][c-1] // left 1,0
		char right = grid[r][c+1] // right 1,2
		
		if(up=='.' && visited[i-1][j]==0) {
			dfs(grid, r-1, c);
		} else {
			return;
		}
		if(down=='.' && visited[i+1][j]==0) {
			dfs(grid,r+1,c);
		} else {
			return;
		}
		if(left=='.' && visited[i][j-1]==0) {
			dfs(grid,r,c-1);
		} else {
			visited[i][j-1]=1;
			return;
		}
		if(right=='.' && visited[i][j+1]==0) {
			dfs(grid,r,c+1); // 1,2
		} else {
			visited[i][j+1]=1;
			return;
		}
	}

};

int main() {
	int r, c;
	fin >> r >> c;
	vector<vector<char>> grid(r,vector<char>(c));
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			fin >> grid[i][j];
		}
	}

}












template<typename T> ll maxv(const vector<T> &a) {
	ll n = a.size();
	ll mx = -1;
	for(ll i = 0; i < n; i++) {
		if(a[i] > mx) mx = a[i];
	}
	
	return mx;
}
template<typename T> void printv(const vector<T> &v) {
	for(auto i : v) {
		cout << i << " ";
	}
	cout << endl;
}
template<typename T> void printvv(const vector<vector<T>> &v) {
	for(auto i : v) {
		printv(i);
	}
	cout << endl;
}
template<typename T, typename U> void printvp(vector<pair<T,U>> &vp) {
	for(auto p : vp) {
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;
}
