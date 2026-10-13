
#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> city(n, vector<char>(n, '.'));
        city[n - 2][n - 1] = 'C';
        city[n - 1][n - 2] = 'C';
        for (const auto &row : city) {
            for (const auto &square : row) {
                cout << square;
            }
            cout << '\n';
        }
    }
}
