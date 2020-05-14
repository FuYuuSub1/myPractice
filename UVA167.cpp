#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>


using namespace std;

int arr[8][8], visit[8], locate[8], a;

bool judge(int n) {
	for(int i = n - 1, j = locate[n] - 1; i >= 0 && j >= 0; i--, j--) {
		if (locate[i] == j) {
			return false;
		}
	}

	for (int i = n - 1, j = locate[n] + 1; i >= 0 && j < 8; i--, j++) {
		if (locate[i] == j) {
			return false;
		}
	}
	return true;
}


void dfs(int index) {
	if (index == 8) {
		int sum = 0;
		for (int i = 0; i < 8; i++) {
			sum += arr[locate[i]][i];
		}
		a = max(a, sum);
		return;
	}
	for (int i = 0; i < 8; i++) {
		if (!visit[i]) {
			locate[index] = i;
			if (judge(index)) {
				visit[i] = 1;
				dfs(index + 1);
				visit[i] = 0;
			}
		}
	}
}

int main() {
	int c;
	scanf("%d", &c);
	while (c--)
	{
		a = 0;
		memset(locate, 0, sizeof(locate));
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		dfs(0);
		printf("%5d\n", a);
	}
	return 0;
}
