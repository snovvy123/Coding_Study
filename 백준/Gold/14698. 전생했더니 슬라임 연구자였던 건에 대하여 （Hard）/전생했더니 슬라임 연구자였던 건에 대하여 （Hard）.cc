#include <iostream>
#include <vector>
#include <queue>
using ll = long long;
const ll MOD = 1e9 + 7;
using namespace std;
int t, n; 
ll num, a, b;
long long energy;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    energy = 1;
    while(t--) {
        energy = 1;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = 0; i < n; i++) {
            cin >> num;
            pq.push(num);
        }
        while(pq.size() > 1) {
            a = pq.top(); pq.pop();
            b = pq.top(); pq.pop();
            ll ab = (a * b) % MOD;
            energy = (energy * ab) % MOD;
            pq.push(a * b);
        }
        cout << energy << "\n";
    }
    return 0;
}