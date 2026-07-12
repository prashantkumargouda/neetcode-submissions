class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.size() != t.size() ) return false ; 
        
        // converting to lower case 
        transform(s.begin() , s.end() , s.begin() , ::tolower ) ; 
        transform(s.begin() , s.end() , s.begin() , ::tolower ) ; 
        sort( s.begin() , s.end() ) ; 
        sort( t.begin() , t.end() ) ;  

        return s==t ;  
    }
};
