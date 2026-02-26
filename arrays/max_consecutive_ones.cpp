#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int length = 0;
    int maxl = 0;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            length++;
            maxl = max(maxl, length);
        } else {
            length = 0;
        }
    }

    cout << maxl << "\n";
}