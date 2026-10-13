#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    ull M;
    cin >> s >> M;
    ull bad_subseqs = 0;
    ull num_a = 0;
    ull num_ck = 0;
    for (const auto &c : s) {
        if (c == 'A')
            num_a++;
        else if (c == 'C' || c == 'K') {
            num_ck++;
            bad_subseqs += num_a;
        }
    }
    unsigned long long result;
    if (bad_subseqs >= M)
        result = bad_subseqs - M;
    else
        result = 0;
    cout << result << '\n';
}

/*

ACAACCAK
ACACACAK
ACCAACAK
ACCACAAK
ACCCAAAK
ACCCAAKA


*/
