#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("tttt.in");
ofstream fout("tttt.out");

template<typename T>
void printV(vector<T> v);

template<typename T>
void print2V(vector<vector<T>> v);


int main() {
	set<char> temp;
	vector<vector<char>> board(3, vector<char>(3,0));    
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			char c;
			fin >> c;
			board[i][j] = c;
			temp.insert(c);
		}
	}

	vector<char> list(temp.begin(), temp.end());
	print2V(board);
	printV(list);

	// single
	int single = 0;
	for(int i = 0; i < 3; i++) {
		bool row = (board[i][0] == board[i][1] && board[i][1] == board[i][2]);
		bool column = (board[0][i] == board[1][i] && board[1][i] == board[2][i]);
		if(row) {
			single++;		
		}
		if(column) {
			single++;
		}
	}
	bool d_ltr = board[0][0] == board[1][1] && board[1][1] == board[2][2];
	bool d_rtl = board[0][2] == board[1][1] && board[1][1] == board[2][0];
	if(d_ltr) {
		single++;
	}
	if(d_rtl) {
		single++;
	}
	cout << single << endl;
	// couple
	int couple = 0;
	int n = list.size();
	for(int i = 0; i < n; i++) {
		char c1 = list[i];
		for(int j = i + 1; j < n; j++) {
			char c2 = list[j];
			for(int k = 0; k < 3; k++) {
				bool row1, row2, row3;
				if(board[k][0] == board[k][1] && board[k][1] == board[k][2]) { continue; }
				else {
					bool row1 = (board[k][0] == c1 || board[k][0] == c2);
					bool row2 = (board[k][1] == c1 || board[k][1] == c2); 
					bool row3 = (board[k][2] == c1 || board[k][2] == c2);
				}
				if(row1 && row2 && row3) {
					couple++;
					cout << board[k][0] << " " << board[k][1] << " " << board[k][2] << endl;
					cout << c1 << " " << c2 << endl;
				}
			}
			//d_ltr = 
			//d_rtl = 
		}
	}
	cout << couple << endl;


    return 0;
}









template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
template<typename T>
void print2V(vector<vector<T>> v) {
    for(auto sub_vector : v) {
        printV(sub_vector);
    }
}
