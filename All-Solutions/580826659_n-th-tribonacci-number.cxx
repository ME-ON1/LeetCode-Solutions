id = 580826659 
lang = cpp 
runtime  = 0 ms 
memory = 6.4 MB
title_slug = n-th-tribonacci-number
code =

 class Solution {
    map<int, int > mp;
public:
    int tribonacci(int n) {
        return recurse(n) ;
    }
    
    
    int recurse(int n ) 
    {
        if(mp[n] != 0 )
        {
            return mp[n] ;
        }
        if(n <= 0 ) return 0 ;
        if(n <= 2 ) return 1 ;
        
        mp[n] = recurse(n - 1) + recurse(n - 2) + recurse(n - 3 ) ;
        return mp[n];
        }
};