#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char ch;

	char a[] = " 1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
	char b[] = " `1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
	int i;
	while ((ch = getchar()) != EOF) {
		if (ch == '\n') {
			putchar(ch);
		}
		else {
			for (i = 0; a[i]; i++) {
				if (ch == a[i]) {
					cout << b[i];
				}
			}
		}

	}
	return 0;
}
