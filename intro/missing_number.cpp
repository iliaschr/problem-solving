#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long expected = N * (N + 1) / 2;
    long long actual = 0;

    for (int i = 0; i < N - 1; i++) {
        long long x;
        cin >> x;
        actual += x;
    }

    cout << expected - actual << "\n";
}
