#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void solve(){
    OJ;
    int n;
    cin >> n;
    vector<int> v(n);
    int e = 0, o = 0;
    for(int &e : v){
        cin >> e;
        if(e % 2 == 0) e++;
        else o++;
    }
    if(e % 2 != o % 2){
        cout << "NO\n";
    }else{
        if(e % 2 == 0){
            cout << "YES\n";
        }else{
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1){
                        cout << "YES\n";
                        return;
                    }
                }
            }
        }
    }
}

int main(){
    int c;
    cin >> c;

    while(c--){
        solve();
    }
    return 0;
}
