#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("cbarn.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int n;
    cin >> n;
    vector<int> rooms(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> rooms[i];
    }
    vector<int> distances(n, 0);
    // basically if we start at 0, 1, 2, ... , n
        // distances[0] = 0 -> n
        // distances[1] = 1 -> 0
            // 
    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {
            distances[i] += rooms[(j+i)%n] * j;
            // distances[0] = 
                            // rooms[0] * 0 = 0
                            // rooms[1] * 1 = 7
                            // rooms[2] * 2 = 8 * 2
            // distances[1] =
                            // rooms[1] * 0 = 
        }
    }
    cout << *min_element(distances.begin(), distances.end());

    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
