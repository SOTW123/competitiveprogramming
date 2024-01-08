#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void solve(){
        unordered_set<int> s = {1,2,3,4,5,6,7,8,9,0};
        string str = "1";
        cout << s.count(str[0]-'0');
    }
};

int main() {
    Solution * s = new Solution();
    s->solve();
    delete s;
}