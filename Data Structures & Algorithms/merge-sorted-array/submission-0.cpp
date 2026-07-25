class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // modify nums1  

        vector<int> copy(nums1.begin() , nums1.begin() + m ) ; 

        int index = 0 ; 
        int i = 0 , j = 0 ; 

        while( i < m && j < n ) {
            if( i < m && copy[i] <= nums2[j] ) {
                nums1[index++] = copy[i++] ; 
            } 
            else {
                nums1[index++] = nums2[j++] ; 
            }
        } 

        while( i < m ) {
            nums1[index++] = copy[i++] ; 
        } 
        
        while( j < n ) {
            nums1[index++] = nums2[j++] ; 
        }
    
    }
};