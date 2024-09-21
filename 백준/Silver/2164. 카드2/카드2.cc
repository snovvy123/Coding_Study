#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int n, a;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) q.push(i);
    while(q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << "\n";
    return 0;
}