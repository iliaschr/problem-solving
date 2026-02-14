#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int x = 0;

    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        x ^= number;
    }

    cout << x << "\n";
}
