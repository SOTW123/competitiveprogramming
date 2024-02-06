#include <bits/stdc++.h>

using namespace std;

ifstream fin("circlecross.in");
ofstream fout("circlecross.out");

string removeDuplicates(string &s) {
    int n = s.size();
    string duplicateFree = "";
    unordered_set<char> encounteredChars;

    for (int i = 0; i < n; i++) {
        char currentChar = s[i];
        if (encounteredChars.find(currentChar) == encounteredChars.end()) {
            duplicateFree += currentChar;
            encounteredChars.insert(currentChar);
        } else {
            // Remove both instances of the duplicating character
            size_t pos = duplicateFree.find(currentChar);
            if (pos != string::npos) {
                duplicateFree.erase(pos, 2);
            }
        }
    }

    return duplicateFree;
}

bool is_repeating(string & s) 
{
    int n = s.size();
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == s[i+1]) 
        {
            return true;
        }
    }
    return false;
}

string remove_repeating(string & s) 
{
    int n = s.size();
    while(is_repeating(s))
    {
        for(int i = 0; i < n; i++) 
        {
            if(s[i] == s[i+1])
            {
                int enter = s.find(s[i]);
                s.erase(enter, 2);
            }
        }
    }
    return s;
}
int main() {
    string line;
    getline(fin, line);

    // ABAB
    // can take two points of char c and count how many of each letter are in between, 
    //  if < 2 then we can say its overlapping
    //      and then we just remove that char from string

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int n = line.size();
    
    int counter = 0;

    for(int i = 0; i < 26; i++) {
        int enter = line.find_first_of(alphabet[i]);
        int exit = line.find_last_of(alphabet[i]);
        if(enter != -1 || exit != -1) {
            string snatched = line.substr(enter+1, exit-1);
            snatched = removeDuplicates(snatched);
            //counter += snatched.size();
            //cout << snatched << " " << counter;
            
            
            string temp = line.substr(enter+1, exit-1);
            if(is_repeating(temp)) {
                continue;
            } else counter += snatched.size();
            line.erase(enter, 1);
            line.erase(exit-1, 1);
            cout << line << endl;
        }
        //cout << endl;
    }

    cout << counter << endl;

    return 0;
}
