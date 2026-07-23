class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size() ; 

        int res = 0 , currSum = 0; 

        unordered_map<int , int> prf ;  
        prf[0] = 1 ; 
        
        for(int i=0 ; i<n ; i++){
            currSum += nums[i] ; 
            int diff = currSum - k ; 
            res += prf[diff] ; 
            prf[currSum]++ ; 
        } 

        return res ; 
    }
};