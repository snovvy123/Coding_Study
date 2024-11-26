#include <iostream>
using namespace std;
int dp[1004][1004];
int n, k;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    dp[0][0] = 1;
    dp[0][1] = 1;
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i) dp[i][j] = 1;
            else dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }
    cout << dp[n][k] << "\n";
    return 0;
}