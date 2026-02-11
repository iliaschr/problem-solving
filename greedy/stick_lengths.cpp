#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> sticks(N);
    for (int i = 0; i < N; i++)
        cin >> sticks[i];

    sort(sticks.begin(), sticks.end());

    long long median = sticks[N / 2];
    long long cost = 0;

    for (int i = 0; i < N; i++) {
        cost += llabs(sticks[i] - median);
    }

    cout << cost << "\n";
}
