class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size() ; 
        int m = board[0].size() ; 

        unordered_set<string> seen ; 

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                char num = board[i][j] ; 

                if( num != '.' ) {
                    string rowKey = string(1 , num) + "in row" + to_string(i) ;
                    string colKey = string(1 , num) + "in col" + to_string(j) ; 

                    string boxKey = string(1 , num) + "in box" + to_string( i / 3) + to_string( j / 3 ) ;  

                    if( seen.count(rowKey) || seen.count(colKey) || seen.count(boxKey) ) return false ; 

                    seen.insert(rowKey) ;
                    seen.insert(colKey) ; 
                    seen.insert(boxKey) ; 
                } 
            } 
        } 

        return true ; 
    }
};
