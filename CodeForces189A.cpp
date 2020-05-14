#include <iostream>
#include <string.h>

using namespace std;

int result[4005];
int a, b, c;


int main() {
    int n;
    cin >> n >> a >> b >> c;
    memset(result, -100, sizeof(result));
    result[0] = 0;
    for(int i = 1; i <= n; i++){
        if(i >= a) result[i] = max(result[i], result[i - a] + 1);
        if(i >= b) result[i] = max(result[i], result[i - b] + 1);
        if(i >= c) result[i] = max(result[i], result[i - c] + 1);
    }
    cout << result[n];
    return 0;
}
