#include <bits/stdc++.h>
using namespace std;

struct Customer {
    int a, b, idx;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Customer> customers(N);

    for (int i = 0; i < N; i++) {
        cin >> customers[i].a >> customers[i].b;
        customers[i].idx = i;
    }

    // Sort by arrival time
    sort(customers.begin(), customers.end(),
         [](const Customer &x, const Customer &y) {
             return x.a < y.a;
         });

    // Min-heap: (departure_time, room_number)
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    vector<int> answer(N);
    int roomCount = 0;

    for (auto &c : customers) {

        // A room is free
        if (!pq.empty() && pq.top().first < c.a) {
            auto [departure, room] = pq.top();
            pq.pop();

            answer[c.idx] = room;

            pq.push({c.b, room});
        }
        // No room available
        else {
            roomCount++;
            answer[c.idx] = roomCount;
            pq.push({c.b, roomCount});
        }
    }

    cout << roomCount << "\n";
    for (int i = 0; i < N; i++) {
        cout << answer[i] << " ";
    }
    cout << "\n";
}
