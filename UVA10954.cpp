#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int N, m;
	while (scanf("%d", &N) && N) {
		priority_queue<int, vector<int>, greater<int>> PriQ;
		for (int i = 0; i < N; i++) {
			scanf("%d", &m);
			PriQ.push(m);
		}
		int c = 0;
		while (PriQ.size() != 1) {
			m = PriQ.top();
			PriQ.pop();
			m += PriQ.top();
			PriQ.pop();

			c += m;

			PriQ.push(m);
		}
		printf("%d\n", c);
	}
	return 0;
}
