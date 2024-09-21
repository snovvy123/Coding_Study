#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<char> v;
stack<int> s;
int n, a, num, cnt;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cnt = 1;
    for(int i = 0; i < n; i++) {
        cin >> num;
        while(cnt <= num) {
            s.push(cnt);
            cnt++;
            v.push_back('+');
        }
        if(s.top() == num) {
            s.pop();
            v.push_back('-');
        }
        else {
            cout << "NO" << "\n";
            return 0;
        }
    }
    for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";
    return 0;
}