class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) { 
        int n = nums.size() ; 
        vector<int> ans ;  
        int min = floor(n/3) + 1 ; 

        unordered_map<int , int> mp ; 

        for(int i=0 ; i<n ; i++){
            mp[nums[i]]++ ; 
            if( mp[nums[i]] >= min ) {
                if( find( ans.begin() , ans.end() , nums[i] ) == ans.end() ) {
                    ans.push_back( nums[i] ) ;
                }
            }
        } 


        return ans ; 
    }
};