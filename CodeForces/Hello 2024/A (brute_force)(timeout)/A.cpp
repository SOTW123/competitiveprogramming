#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("A.in");

int main() {
    int t;
    fin >> t;
    for(int i = 0 ; i < t; i++) {
        int a, b;
        fin >> a >> b;
        int j = 0;

        bool w = false;
        while(!w) {
            if(j % 2 == 0) {
                if(a == 0 && b == 0) {
                    cout << "Bob";
                    break;
                }
                if(a < b-1 || a == 0) {
                    swap(a,b);
                    a-=b;
                } else { a-=b; }
            } else {
                if(a == 0 && b == 0) {
                    cout << "Alice";
                    break;
                }
                if(b < a-1 || b == 0) {
                    swap(a,b);
                    b-=a;
                } else { b-=a; }
            }
            j++;
        }

        cout << endl;
    }
    
    return 0;
}