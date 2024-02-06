#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("speeding.in");
ofstream fout("speeding.out");


int main() {	
	int n;
	int m;
	fin >> n >> m;

	int actual[100] = {0};
	int bessie[100] = {0};
	
	int actualRoadLength;
	int actualSpeedLimit;
	
	int currentRoadLength = 0;
	int currentSpeedLimit = 0;

	for(int i = 0; i < n; i++) {
		fin >> actualRoadLength >> actualSpeedLimit;
		fill(actual + currentRoadLength, actual + currentRoadLength + actualRoadLength, actualSpeedLimit);	
		currentRoadLength += actualRoadLength;
	}
	int bessieRoadLength;
	int bessieSpeedLimit;
	currentRoadLength = 0;
	currentSpeedLimit = 0;
	for(int i = 0; i < m; i++) {
		fin >> bessieRoadLength >> bessieSpeedLimit;
		fill(bessie + currentRoadLength, bessie + currentRoadLength + bessieRoadLength, bessieSpeedLimit);
		currentRoadLength += bessieRoadLength;
	}
	int currentMax = 0;
	int theMax = 0;
	bool isEqual = true;
	for(int i = 0; i < 100; i++) {
		if(bessie[i] > actual[i]) {
			theMax = bessie[i] - actual[i];
			if(currentMax > theMax) {
				theMax = currentMax;
			}
			isEqual = false;
		}
		currentMax = theMax;
	}
	if(isEqual) {
		theMax = 0;
	}
	fout << theMax;
	fout.close();
	return 0;
}
