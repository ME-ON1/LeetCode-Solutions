id = 579306087 
lang = cpp 
runtime  = 12 ms 
memory = 11.2 MB
title_slug = two-sum
code =

 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, int> mp ;
        vector<int> pr; 
        for(int i = 0 ; i < nums.size() ; i++ ) 
        {
            int sum1 = target - nums[i] ;
            
            if (mp.find(sum1) != mp.end())
            {
                pr.push_back(i ) ;
                pr.push_back(mp[sum1] ); 
                return pr ;
            }else {
                mp[nums[i]] = i ;
            }
        }
        
        return pr ;
    }
};