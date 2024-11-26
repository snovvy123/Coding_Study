#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M, res = 1, tmp = 1;
        std::cin >> N >> M;

        for (int i = M; i > M - N; --i) {
            res = res * i;
            res = res / tmp++;
        }

        std::cout << res << "\n";
    }
    return 0;
}