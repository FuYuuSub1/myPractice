#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
int a[1010];
int main() {
	int R, n, i, count;
	while (scanf("%d%d", &R, &n) != EOF) {
		if (R == -1 && n == -1) {
			break;
		}
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}

		sort(a, a + n);
		
		i = 0;
		count = 0;
		while (i < n) {
			int nc = a[i++];
			while (i < n && a[i] <= nc + R) {
				i++;
			}
			int mc = a[i - 1];
			while (i < n && a[i] <= mc + R) {
				i++;
			}
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
