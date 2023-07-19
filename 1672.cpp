// Richest Customer Wealth

/* 
* You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
* 
* A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

// for(auto &user : accounts) is auto iteration, which is equivalent to:
// for (auto user = accounts.begin(); user != accounts.end(); user++)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        printf(ans1(accounts));
        printf(faster(accounts));
    }
    int ans1(vector<vector<int>>& accounts) {
        // Runtime: 5ms (faster than 66.15%) | Memory: 7.71MB (less than 62.81%)
        int max = 0;
        for(int i = 0;i < accounts.size();i++){
            int temp = 0;
            for(int j = 0;j < accounts[0].size();j++){
                temp += accounts[i][j];
            }
            if(temp > max){
                max = temp;
            }
        }
        return max;
    }
    int faster(vector<vector<int>>& accounts){
        // Runtime: 3ms (faster than 93.27%) | Memory: 7.77MB (less than 62.81%)
        int richest = 0;
        for(auto &user : accounts){
            int temp = accumulate(user.begin(),user.end(),0);
            richest = max(richest,temp);
        }
        return richest;}
};