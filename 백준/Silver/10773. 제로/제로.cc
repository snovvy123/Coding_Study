#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int k, tmp;
int sum = 0;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> tmp;
        if(tmp != 0) {
            s.push(tmp);
            sum += tmp;
        } else {
            sum -= s.top();
            s.pop();
        }
    }
    cout << sum << "\n";
    return 0;
}