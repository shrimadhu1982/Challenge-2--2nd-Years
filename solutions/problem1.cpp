

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    ifstream gfile("inputs/grid.txt");
    if (!gfile.is_open()) {
        cerr << "Cannot open inputs/grid.txt\n";
        return 1;
    }
    vector<string> grid;
    string line;
    while (getline(gfile, line)) {
        if (!line.empty()) grid.push_back(line);
    }
    gfile.close();

   
    ifstream dfile("inputs/directions.txt");
    if (!dfile.is_open()) {
        cerr << "Cannot open inputs/directions.txt\n";
        return 1;
    }
    vector<char> dirs;
    string token;
    while (dfile >> token) {
        if (!token.empty()) dirs.push_back(token[0]);
    }
    dfile.close();

    int n = (int)grid.size();
    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

   
    while ((int)dirs.size() < n) dirs.push_back('R');

    
    for (int i = 0; i < n; ++i) {
        string &row = grid[i];
        if (row.empty()) continue;
        int m = (int)row.size();
        if (dirs[i] == 'R' || dirs[i] == 'r') {
          
            rotate(row.rbegin(), row.rbegin() + 1, row.rend());
        } else {
           
            rotate(row.begin(), row.begin() + 1, row.end());
        }
    }

    int mid = n / 2; 
    string midrow = grid[mid];

    long long sum = 0;
    for (unsigned char c : midrow) sum += (int)c;

    cout << sum << "\n";
    return 0;
}
