#include <iostream>
#include <algorithm>
using namespace std;
int n;
int sum = 0;
int a[1001];
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            sum += a[j];
        }
    }
    cout << sum << "\n";
    return 0;
}