#include <bits/stdc++.h>
#include <ios>
#include <numeric>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    ull credit_price = accumulate(p.begin(), p.end(), 0ULL);
    cout << credit_price << endl;
    vector<ull> groups;
    for (const auto &price : p) {
        int last_digit = price % 10;
        if (last_digit == 0 || last_digit == 5 || last_digit == 7 ||
            last_digit == 2) {
            groups.push_back(price);
        }
    }
}
