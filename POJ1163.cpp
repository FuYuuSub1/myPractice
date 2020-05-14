#include <iostream>

using namespace std;

int result[105][105];
int row;
int memorize[105][105];

int MaxSum(int i, int j){
    if(memorize[i][j] != -1){
        return memorize[i][j];
    }
    if(i == row){
        memorize[i][j] = result[i][j];
    }
    else{
        int x = MaxSum(i + 1, j);
        int y = MaxSum(i + 1, j + 1);
        memorize[i][j] = max(x,y) + result[i][j];
    }
    return memorize[i][j];
}

int main() {
    for(int i = 0; i < 105; i++){
        for(int j = 0; j < 105; j++){
            memorize[i][j] = -1;
        }
    }
    cin >> row;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> result[i][j];
        }
    }
    cout << MaxSum(0,0) << endl;
}
