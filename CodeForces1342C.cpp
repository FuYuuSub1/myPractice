#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
 
using namespace std;
 
int N;
int pre[40500];
 
void build(int a, int b) {
	N = a * b;
	pre[0] = 0;
	for (int i = 1; i <= N; i++) {
		pre[i] = pre[i - 1];
		if ((i % a) % b != (i % b) % a) {
			pre[i]++;
		}
	}
}
 
long long qx(long long n) {
	long long count = n / N;
	int remain = n % N;
	return pre[N] * 1ll * count + pre[remain];
}
 
long long qx(long long l, long long r) {
	return qx(r) - qx(l - 1);
}
 
void solve() {
	int a, b, q, count;
	long long l, r;
	cin >> a >> b >> q;
	build(a, b);
	for (int i = 0; i < q; i++) {
		cin >> l >> r;
		cout << qx(l, r) << " ";
	}
	cout << "\n";
}
 
int main() {
	int t;
	cin >> t;
 
	while (t--) {
		solve();
	}
	return 0;
}
