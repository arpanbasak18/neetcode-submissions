class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = 0;
        for (int i = 0 ; i<=nums.size()-1 ; i++){
            
            singleNum = singleNum ^ nums[i];

           
        }
         return singleNum;
        
        
    }
};
