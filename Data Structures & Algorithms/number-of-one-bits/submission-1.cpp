class Solution {
public:
    int hammingWeight(uint32_t n) {
        int  res = 0 ;
        while (n>0){
            n &= n-1 ; // n = n&(n-1); // this is delete the right most one 
            res ++ ;
        }
        return res ;

    }
};
