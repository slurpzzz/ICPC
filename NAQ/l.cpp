#include <bits/stdc++.h>
#include <ios>
#include <numeric>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;
        vector<int> times(n);
        for (int i = 0; i < n; i++) {
            cin >> times[i];
        }
        double totalTime = accumulate(times.begin(), times.end(), 0LL);
        double stress = p * p / totalTime;
        cout << stress << '\n';
    }
}
