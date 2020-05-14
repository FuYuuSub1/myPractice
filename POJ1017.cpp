#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
	int p1, p2, p3, p4, p5, p6, n, x, y;
	int space[4] = { 0, 5, 3, 1 };
	while (1) {
		cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6;
		if (p1 == 0 && p2 == 0 && p3 == 0 && p4 == 0 && p5 == 0 && p6 == 0) {
			break;
		}

		n = p4 + p5 + p6 + ceil(p3 / 4.0);

		x = 5 * p4 + space[p3 % 4]; 
		if (p2 > x) {
			n += ceil((p2 - x) / 9.0);
		}

		y = 36 * n - 36 * p6 - 25 * p5 - 16 * p4 - 9 * p3 - 4 * p2;

		if (p1 > y) {
			n += ceil((p1 - y) / 36.0);
		}

		cout << n << endl;
	}
}
