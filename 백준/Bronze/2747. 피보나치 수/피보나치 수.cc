#include <iostream>
using namespace std;
int n;
int dp[46];
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= 45; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cin >> n;
    cout << dp[n] << "\n";
    return 0;
}