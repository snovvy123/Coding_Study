#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int y[1000004];
int n, temp;
int ans = 0;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp >> y[i];
    }
    for(int i = 0; i < n; i++) {
        while(!s.empty() && s.top() > y[i]) s.pop();
        if(y[i] && (s.empty() || s.top() < y[i])) {
            s.push(y[i]);
            ans++;
        } 
    }
    cout << ans << "\n";
    return 0;
}