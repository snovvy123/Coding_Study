#include <iostream>
#include <stack>
using namespace std;
stack<pair<int, int>> s;
int n, a;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        while (!s.empty()) {
            if (s.top().second > a) {
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if (s.empty()) cout << 0 << " ";
        s.push({i, a});
    }

    return 0;
}