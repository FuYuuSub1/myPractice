#include <iostream>
#include <stdio.h>


using namespace std;

int main(){

    int n, m, count = 0;
    char grid[12][12];
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        scanf("%s", &grid[i][1]);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(grid[i][j] == 'W'){
                if(grid[i - 1][j] == 'P' || grid[i][j - 1] == 'P' || grid[i][j + 1] == 'P' || grid[i + 1][j] == 'P'){
                    count += 1;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
