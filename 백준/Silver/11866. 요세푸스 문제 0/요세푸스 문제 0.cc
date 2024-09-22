#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int n, k;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        q.push(i);
    }
    cout << "<";
    while(q.size() > 1) {
        for(int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    return 0;
}