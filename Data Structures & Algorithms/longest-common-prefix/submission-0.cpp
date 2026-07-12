class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0] ; 

        int n = strs.size() ; 
        if( n == 0 ) return ""; 

        for(int i=1 ; i<n ; i++){
            while( strs[i].find(prefix) != 0 ) {
                prefix.pop_back() ; 
                if( prefix.size() == 0 ) return "" ; 
            }   
        } 

        return prefix ;
    }
};