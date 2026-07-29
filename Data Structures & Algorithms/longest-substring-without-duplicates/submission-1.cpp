class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // brute force 
        int res = 0 ; 
        int n = s.size() ; 
        
        for(int i=0 ; i<s.size() ; i++){
            unordered_set<char> charSet ; 
            for(int j=i ; j<n ; j++){
                if( charSet.find(s[j]) != charSet.end() ) { // if the character is found
                    break ; 
                } 

                charSet.insert(s[j]) ; 
            } 

            res = max( res , (int)charSet.size() ) ; 
        } 

        return res ; 
    }
};
