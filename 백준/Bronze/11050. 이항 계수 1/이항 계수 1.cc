#include <iostream>
using namespace std;
int n, k;
int factorial(int a) {
    int tmp = 1;
    for(int i = 1; i <= a; i++) {
        tmp *= i;
    }
    return tmp;
}
int main() {
    cin >> n >> k;
    int ans = factorial(n) / (factorial(k) * factorial(n - k));
    cout << ans;
}