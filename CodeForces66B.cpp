#include<cmath>
#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<vector>
#include<stdio.h>
 
using namespace std;
 
int main()
{
	int n, ans;
	int v[1005];
	ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		int j;
		for (j = i + 1; j < n && v[j] >= v[j - 1]; j++) {}
		while (j < n && v[j] <= v[j - 1]) {
			j++;
		}
		if (ans < j - i) {
			ans = j - i;
		}
	}
	cout << ans;
	return 0;
}
