#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> pq;
int n, tmp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp == 0) {
            if(pq.empty()) {
                cout << 0 << "\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(tmp);
        }
    }
    return 0;
}