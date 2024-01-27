#include <bits/stdc++.h>

using namespace std;

int main() {
    string line = "123456";
    string sub = line.substr(line.length() - 3, 3);
    reverse(sub.begin(), sub.end());
    line.replace(line.length() - 3, 3, sub);
    cout << line << endl;

    return 0;
}
