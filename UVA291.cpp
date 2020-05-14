#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int house[5][5] = {
	{0, 1, 1, 0, 1}, {1, 0, 1, 0, 1}, {1, 1, 0, 1, 1}, {0, 0, 1, 0, 1}, {1, 1, 1, 1, 0}
};

int route[9] = { 0 };
void dfs(int index, int current) {
	route[index] = current;
	if (index == 8) {
		for (int i = 0; i < 9; i++) {
			printf("%d", route[i] + 1);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < 5; i++) {
		if (house[current][i] == 1) {
			house[current][i] = house[i][current] = 0;
			dfs(index + 1, i);
			house[current][i] = house[i][current] = 1;
		}
	}
}

int main() {
	dfs(0, 0);
	return 0;
}
