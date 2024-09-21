#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> p_queue;
int n, tmp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp == 0) {
            if(p_queue.empty()) {
                cout << 0 << "\n";
            } else {
                cout << p_queue.top() << "\n";
                p_queue.pop();
            }
        }
        else {
            p_queue.push(tmp);
        }
    }
    return 0;
}