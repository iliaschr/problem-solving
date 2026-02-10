#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> ar(N);
    for (int i = 0; i < N; i++) cin >> ar[i];

    int cur = ar[0];
    int ans = ar[0];

    for (int i = 1; i < N; i++) {
        cur = max(ar[i], cur + ar[i]);
        ans = max(ans, cur);
    }

    cout << ans << "\n";
}
