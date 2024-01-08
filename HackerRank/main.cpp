#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;



template<typename T>
void printV(vector<T> v);

class Main {
    public:
        int val = 5;
        void print() {
            cout << "Hello World!" << endl;
        }
};

int main() {
    Main obj;
    obj.print();

    Main* ptr = new Main();
    ptr->print();
    cout << ptr->val << endl;
    
    return 0;
}


template<typename T>
void printV(vector<T> v) {
    for(T value : v) {
        cout << value << " ";
    }
    cout << endl;
}
