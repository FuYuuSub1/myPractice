class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> count(amount + 1 , 0);
        count[0] = 1;
        for(auto c: coins){
            for(int i = c; i <= amount; i++){
                count[i] += count[i-c];
            }
        }
        return count[amount];
    }
};
