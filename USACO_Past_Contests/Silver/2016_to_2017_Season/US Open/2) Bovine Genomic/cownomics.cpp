    #include <bits/stdc++.h>

    using namespace std;


    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");

    int main() {
        // Map to convert DNA characters to unique IDs
        map<char, int> genome_ID = {{'A', 0}, {'T', 1}, {'C', 2}, {'G', 3}};
        // Read input from the file

        // Number of cows and length of the genome
        int N, M;
        // Read the number of cows and genome length
        fin >> N >> M;
        // Vector to store the spotted cows' genome
        vector<vector<int>> spotted(N, vector<int>(M,0));
        // Read the spotted cows' genome
        for(int i = 0; i < N; i++) {
            string current_line;
            fin >> current_line;
            for(int j = 0; j < M; j++) {
                spotted[i][j] = genome_ID.at(current_line[j]);
            }
        }
        // Convert each DNA character to its corresponding ID

        // Vector to store the plain cows' genome
        vector<vector<int>> plain(N, vector<int>(M, 0));

        // Read the plain cows' genome
        for(int i = 0; i < N; i++) {
            string line;
            fin >> line;
            for(int j = 0; j < M; j++) {
                plain[i][j] = genome_ID.at(line[j]);
            }
        }
        // Convert each DNA character to its corresponding ID

        // Variable to store the count of valid sets
        int valid_sets = 0;
        // Loop through every possible group of 3

            // Vector to store spotted cows' IDs for a specific group of 3

            // Check each spotted cow's combination for the group of 3

                // Mark the combination as true in the vector

            // Variable to check if the set is valid

            // Check each plain cow's combination for the group of 3

                // If the combination matches a spotted cow's combination, set valid to false

            // Increment the count of valid sets if the current set is valid

        // Write the result to the output file

        for(int i = 0; i < M; i++) {
            for(int j = i + 1; j < M; j++) {
                for(int k = j + 1; k < M; k++) {
                    vector<bool> spotted_ids(64);
                    for(int l = 0; l < N; l++) {
                        int total = (16 * spotted[l][i] + 4 * spotted[l][j] + 1 * spotted[l][k]);
                        spotted_ids[total] = true;
                    }
                    
                    bool valid = true;
                    for(int l = 0; l < N; l++) {
                        int total = (16 * plain[l][i] + 4 * plain[l][j] + 1 * plain[l][k]);
                        
                        if(spotted_ids[total]) {
                            valid = false;
                            break;
                        }

                    }
                    valid_sets += valid;
                }
            }
        }
        cout << valid_sets;
        fout << valid_sets;
        return 0;
    }

