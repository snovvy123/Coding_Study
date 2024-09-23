#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n, w, l;
queue<int> q;
#define INF 987654321
int arr[1001];

int main() {
	cin >> n >> w >> l;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int time = 0, total = 0;
	for (int i = 0; i < n; i++) {
		while (1) {
			if (q.size() == w) {
				total -= q.front();
				q.pop();
			}
			if (total + arr[i] <= l) break;
			q.push(0);
			time++;
		}
		q.push(arr[i]);
		total += arr[i];
		time++;
	}
	cout << time + w << "\n";
	return 0;
}