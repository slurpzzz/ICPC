#include <bits/stdc++.h>
#include <ios>
#include <unordered_map>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ull n, q, g;
        cin >> n >> q >> g;
        unordered_map<ull, ull> people_to_genre;
        unordered_map<ull, ull> genre_to_count;
        ull s, a;
        char pq;
        while (q--) {
            cin >> pq >> s;
            if (pq == 'P') {
                cin >> a;
                while (a--) {
                    ull i;
                    cin >> i;
                    if (people_to_genre.count(i) > 0)
                        genre_to_count[people_to_genre[i]]--;
                    people_to_genre[i] = s;
                    genre_to_count[s]++;
                }
            } else {
                cout << genre_to_count[s] << '\n';
            }
        }
    }
}
