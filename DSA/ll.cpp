#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    static int factorial(int n) {
        if(n==0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n-1);
        }
    }
};

int main() {
    Solution * s = new Solution();
    cout << s->factorial(5);
    delete s;
}