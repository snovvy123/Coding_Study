#include <iostream>
using namespace std;
int n, k;
int a[11];
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum += k / a[i];
        k = k % a[i];
    }
    cout << sum << "\n";
    return 0;
}
