#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        string line;
        getline(cin, line);
        int n = line.size();
        if(n > 10) {
            line.replace(1,n-2, to_string(n-2));
            cout << line << endl;
        } else 
            cout << line << endl;
    }
    
    return 0;
}