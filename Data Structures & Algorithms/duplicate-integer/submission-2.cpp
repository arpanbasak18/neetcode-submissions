class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>mp ;
        for (int i = 0 ; i< nums.size();i++){
            int num = nums[i];
            if(mp.count(num) > 0){
                return true ;
            }
            mp.insert(num);

        }
        return false ;
    }
};