#include <bits/stdc++.h>

using namespace std;

ifstream fin("square.in");
ofstream fout("square.out");

int main() {
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	int left = min(x1,x3);
	int right = max(x2, x4);
	int bottom = min(y1, y3);
	int top = max(y2,y4);

	int lr = max(left,right)-min(left,right);
	int bt = max(bottom, top)-min(bottom,top);

	int side = max(lr, bt);

	cout << side * side << endl;
	fout << side * side << endl;
	return 0;
}
