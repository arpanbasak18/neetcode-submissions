class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        for( int i = 1 ;i < nums.size() ; i++){ //let,where, nums.size()== n;
           if(nums[i] == nums[i-1]){
            return true ;
           }

       } 
       return false ;
        
    }
};