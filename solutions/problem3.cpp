

#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream sfile("inputs/states.txt");
    if (!sfile.is_open()) {
        cerr << "Cannot open inputs/states.txt\n";
        return 1;
    }
    vector<long long> values;
    long long x;
    while (sfile >> x) values.push_back(x);
    sfile.close();

    int terminal_count = 0;
    for (long long v : values) {
        if (isPrime(v)) {
            
            terminal_count++;
        } else if (v % 2 == 0) {
           
            terminal_count++;
        } else {
            
        }
    }

    cout << terminal_count << "\n";
    return 0;
}
