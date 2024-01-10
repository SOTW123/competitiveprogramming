#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;

ifstream fin("A.in");

template<typename T>
void printV(vector<T> v);

int main() {
    int t; // test cases
    fin >> t;

    int factors[6] = {1, 7, 17, 119, 289, 2023};
    int occ[6] = {0, 0, 0, 0, 0, 0};

    for(int i = 0; i < t; i++) {
        int n; // length of sequence b   
        int k; // num of removed elements from sequence a
        fin >> n >> k;
        vector<int> a(n+k, 0); // original sequence aka sequence a
        vector<int> b(n, 0);
        vector<int> removed;

        int product = 1;
        bool reached = false;
        for(int j = 0; j < n; j++) {
            fin >> a[j];
            b[j] = a[j];
            product *= a[j];
        }
        for(int j = 0; j < n+k; j++) {
            for(int k = 0; k < 6; k++) {
                if(product == factors[k]) {
                    reached = true;
                }
            }            
            
            if(a[j] == 0) {
                for(int k = 0; k < 6; k++) {
                    if(product * factors[k] == 2023) {
                        a[j] = factors[k];
                        
                    }
                }
            }                                
        }

        if(reached) {
            cout << "YES" << endl;
            int s = a.size();
            printV(removed);
            printV(a);
            printV(b);
        } else {
            cout << "NO" << endl;   
        }

        
        
    }
    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
