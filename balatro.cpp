
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n;
    cin >> k;
    vector<pair<char, int>> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i].first;
        cin >> cards[i].second;
    }
    for (const auto &p : cards) {
        cout << p.first << ": " << p.second << '\n';
    }
    for (int i = 1; i <= n; i++) {
        int score = 0;
        if (i == 1) {
            int max_add = 0;
            for (const auto &p : cards) {
                if (p.first == 'a' && p.second > max_add) {
                    max_add = p.second;
                }
            }
            score += max_add;
        }
        cout << score << '\n';
    }
}
