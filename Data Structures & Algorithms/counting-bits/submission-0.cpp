class Solution {
public:
    vector<int> countBits(int n) {
        vector <int>result(n+1);
        if(n == 0)
            return result;

        result [0] = 0 ; // becuse  in 0 bits number of 1 set bit is 1

        for (int i = 1 ;i<=n ; i++){
            if(i%2 != 0){   // that means odd
              
             result[i] = result[i/2]+1 ;

            }else {
                result[i] = result[i/2];
            }
        } 
        return result ;   
        
        
    }
};
