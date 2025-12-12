
#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c) {
    c = tolower((unsigned char)c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream infile("inputs/input2.txt");
    if (!infile.is_open()) {
        cerr << "Cannot open inputs/input2.txt\n";
        return 1;
    }
    string s;
    
    while (getline(infile, s)) {
        if (!s.empty()) break;
    }
    infile.close();

    
    reverse(s.begin(), s.end());

    string tmp;
    for (int i = 0; i < (int)s.size(); ++i) {
        int pos1 = i + 1;
        if (pos1 % 3 == 0) continue;
        tmp.push_back(s[i]);
    }

   
    for (char &c : tmp) c = (char)((unsigned char)c + 2);

   
    int vowels = 0;
    for (char c : tmp) if (is_vowel(c)) ++vowels;

    cout << vowels << "\n";
    return 0;
}
