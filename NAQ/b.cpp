#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll airtime = 0;
    for (size_t i = 1; i < n - 1; i++) {
        ll slope1 = (a[i] - a[i - 1]);
        ll slope2 = (a[i + 1] - a[i]);
        if (slope1 > slope2) {
            airtime++;
        }
    }
    cout << airtime << '\n';
}
