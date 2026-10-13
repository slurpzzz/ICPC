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
        vector<int> p(n);
        array<int, 4> strings = {0, 0, 0, 0};
        for (size_t i = 0; i < n; i++) {
            int s;
            cin >> s;
            if (s <= 10)
                strings[0] = 1;
            else if (s <= 20)
                strings[1] = 1;
            else if (s <= 30)
                strings[2] = 1;
            else
                strings[3] = 1;
        }
        int ans = 0;
        for (const auto &s : strings) {
            ans += s;
        }
        cout << ans << '\n';
    }
}
