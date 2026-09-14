class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pree = 1 ;
        int suff = 1 ;
        int ans = INT_MIN ;
        int n = nums.size();
        
        for(int i = 0 ; i<n ; i++){
            if(pree == 0) pree = 1 ;
            if(suff == 0) suff = 1 ;

            pree = pree *nums[i];
            suff = suff *nums[n-i-1];
           
            if(pree > ans){
                ans = pree;
            }
            if (suff > ans){
                ans = suff ;
            }
            
        }
        return ans ;
    }
};