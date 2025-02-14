id = 496733325 
lang = cpp 
runtime  = 4 ms 
memory = 7.9 MB
title_slug = house-robber
code =

 class Solution {
public:
    vector<int> cache ; 
    int rob(vector<int>& nums) {
        if(nums.size() ==  0 ) return 0 ;
        if(nums.size() == 1 )  return nums[0] ;
        if(nums.size() == 2 ) return max(nums[0], nums[1]  ) ;
        int m = nums.size() ; 
        vector<int> dp(m ) ;
        
        dp[0] = nums[0] ;
        dp[1] = max(nums[0], nums[1]); 
        for(int i = 2 ; i < m ; i++ ) {
            dp[i] = max(dp[i- 2] + nums[i] , dp[i -1 ]) ;
        }
        for(auto i : dp ){
            cout << i << "  " ; 
        }
        cout << endl ;
        return dp[nums.size() -1 ] ;
    }
};