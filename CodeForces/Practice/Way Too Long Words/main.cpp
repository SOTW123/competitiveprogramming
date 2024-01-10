#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;



template<typename T>
void printV(vector<T> v);

int main() {
    string s = "localization";
    int n = s.size();
    s.replace(1,n-2, to_string(n-2));

    cout << s << endl;
    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
