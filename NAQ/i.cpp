#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ull t;
    cin >> t;
    while (t--) {
        ull n;
        ull m;
        cin >> n >> m;
        vector<pair<ull, ull>> constraints(m);
        ll numConstraints = n - 1;
        bool unsolvable = false;
        for (size_t i = 0; i < m; i++) {
            cin >> constraints[i].first >> constraints[i].second;
        }
        for (const auto &[a, b] : constraints) {
            if (a + 1 == b) {
                numConstraints--;
            } else if (a > b) {
                unsolvable = true;
            }
        }
        if (unsolvable) {
            cout << "-1\n";
            continue;
        }
        if (numConstraints < 0)
            numConstraints = 0;
        cout << numConstraints << '\n';
    }
}
