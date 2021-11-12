id = 580824250 
lang = cpp 
runtime  = 0 ms 
memory = 6.2 MB
title_slug = fibonacci-number
code =

 class Solution {
    map<int,int > mp  ;
public:
    int fib(int n) {
        return recurse(n) ;
    }
    
    
    int recurse(int n)
    {
        if(mp[n] != 0 )
        {
            return mp[n] ;
        }
        if (n <= 0 )
        {
            return 0; 
        }
        if ( n <= 2)
        {
            return  1;
        }
        
        mp[n] = recurse(n - 1) + recurse(n - 2) ;
        
        return mp[n] ;
    }
};