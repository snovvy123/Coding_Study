#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int a[1000004];
void binary_search(int x) {
    int left = 0, mid = 0, right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == x) {
            cout << 1 << "\n";
            return;
        } else if(a[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        
    }
    cout << 0 << "\n";
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> m;
    int x;
    for(int i = 0; i < m; i++) {
        cin >> x;
        binary_search(x);
    }



    return 0;
}