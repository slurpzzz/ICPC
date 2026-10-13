#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned long long n;
    cin >> n;
    unsigned long long ans = n * (n + 1) * (n + 2) / 6 % 998'244'353;
    cout << ans << '\n';
}
