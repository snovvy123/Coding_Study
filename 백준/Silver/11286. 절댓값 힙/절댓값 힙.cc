#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
int n, tmp;
struct cmp{
    bool operator()(int a, int b) {
        if(abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int>, cmp> pq;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp == 0) {
            if(pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(tmp);
        }
    }
    return 0;
}