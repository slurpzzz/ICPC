
#include <bits/stdc++.h>
#include <cstddef>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<int, int>> blocks(n);
        for (size_t i = 0; i < n; i++) {
            cin >> blocks[i].first;
            cin >> blocks[i].second;
        }
        int permutations = 0;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n; j++) {
            }
            ll l = blocks[i].first;
            ll w = blocks[i].second;
        }
    }
}
