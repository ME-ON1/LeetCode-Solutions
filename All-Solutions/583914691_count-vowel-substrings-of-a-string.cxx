id = 583914691 
lang = cpp 
runtime  = 12 ms 
memory = 7.9 MB
title_slug = count-vowel-substrings-of-a-string
code =

 class Solution {
public:
    
    bool isVowel(char a)
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' )
        {
            return 1 ;
        }
        return 0; 
    }
    
    int countVowelSubstrings(string word) {
        // map<char , int> mp ;
        int cnt= 0 ;
        
        for(int i = 0; i< word.size() ; i++) 
        {
            unordered_map<char, int> mp ;
            for(int j = i ; j < word.size() && isVowel(word[j]); j++ )
            {
                mp[word[j]]++ ;
                if( mp.size() == 5 )
                {
                    cnt++; 
                }
            }
        }
        return cnt ;
        
        
    }
};