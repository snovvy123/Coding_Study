#include <iostream>
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int start_index = 1;
    int end_index = 1;
    int sum = 1;
    int ans = 1;
    while(end_index != n) {
        if(sum == n) {
            ans++;
            end_index++;
            sum += end_index;
        }
        if(sum > n) {
            sum -= start_index;
            start_index++;
        }
        if(sum < n) {
            end_index++;
            sum += end_index;
        }
    }
    cout << ans << "\n";
    return 0;
}