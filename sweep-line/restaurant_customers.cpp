#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int,int>> events;
    events.reserve(2 * N);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, +1});
        events.push_back({b, -1});
    }

    sort(events.begin(), events.end(), [](auto &x, auto &y) {
        if (x.first != y.first)
            return x.first < y.first;
        return x.second < y.second;
    });

    int cur = 0;
    int ans = 0;

    for (auto &e : events) {
        cur += e.second;
        ans = max(ans, cur);
    }

    cout << ans << "\n";
}
