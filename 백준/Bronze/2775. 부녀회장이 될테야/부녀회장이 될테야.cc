#include <iostream>
using namespace std;
int t, k, n;
int dp[15][15];
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for(int i = 1; i <= 14; i++) {
        dp[i][1] = 1;
        dp[0][i] = i;
    }
    for(int i = 1; i <= 14; i++) {
        for(int j = 2; j <= 14; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }

    }
    while(t--) {
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    return 0;
}