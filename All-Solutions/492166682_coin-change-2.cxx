id = 492166682 
lang = cpp 
runtime  = 4 ms 
memory = 7.2 MB
title_slug = coin-change-2
code =

 class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp( amount+1 , 0 ) ;
        
        dp[0] = 1; 
        
        for(auto j : coins) {
            for(int i =  1; i <= amount ; i++ ) {
                if(i - j >= 0) {
                    dp[i] += dp[i - j] ;
                }
            }
        }
        
        return dp[amount] ;
    }
};