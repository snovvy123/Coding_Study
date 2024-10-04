#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int n, m, tmp;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> m;
    v.reserve(m);
    for(int i = 0; i < m; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> n;
    sort(v.begin(), v.end());
    while(n--) {
        cin >> tmp;
        cout << binary_search(v.begin(), v.end(), tmp) << " ";
    }
    return 0;
}