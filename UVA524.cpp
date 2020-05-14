#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41 };
int ans[16] = { 1 }, n;

bool isprime(int x) {
	for (int i : prime) {
		if (i == x)
			return true;

	}
	return false;
}

void backtrack(int y, bool visit[]) {
	if (y == n) {
		if (!isprime(ans[n - 1] + 1))
			return;
		printf("1");
		for (int i = 1; i < n; i++) {
			printf(" %d", ans[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 2; i <= n; i++) {
		if (visit[i]) continue;
		if (isprime(i + ans[y - 1])) {
			visit[i] = 1;
			ans[y] = i;
			backtrack(y + 1, visit);

			visit[i] = 0;
		}
	}
}

int main() {

	int c = 0;
	while (scanf("%d", &n) != EOF) {
		if (c++) printf("\n");
		printf("Case %d:\n", c);
		bool visit[16] = { 0 };
		backtrack(1, visit);
	}
}
