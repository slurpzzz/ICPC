#include <bits/stdc++.h>
#include <ios>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution dist(0.5);

    int t;
    cin >> t;
    while (t--) {
        vector<char> answers(200, 'X');
        cout << 'T' << endl;
        cin >> answers[0];
        for (int n = 1, i = 1; n < 200; n++, i++) {
            char guess = dist(gen) ? 'T' : 'F';
            if (answers[2 * i - 2] != 'X') {
                guess = answers[2 * i - 2] == 'T' ? 'F' : 'T';
                // guess = 'F' ? answers[2 * i - 2] == 'T' : 'T';
            } else {
                i--;
            }
            cout << guess << endl;
            cin >> answers[n];
        }
    }
}
