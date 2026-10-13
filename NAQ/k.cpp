#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> favorites;

    for (int i = 1; i <= 9; i++) {
        int n = i;
        favorites.push_back(n);
        for (int j = i + 1; j <= 9; j++) {
            n = n * 10 + j;
            favorites.push_back(n);
        }
    }
    sort(favorites.begin(), favorites.end());

    while (t--) {
        int n;
        cin >> n;
        if (n > 123'456'789) {
            cout << "-1\n";
            continue;
        }
        for (const auto &fav : favorites) {
            if (fav >= n) {
                cout << fav << '\n';
                break;
            }
        }
    }
}
