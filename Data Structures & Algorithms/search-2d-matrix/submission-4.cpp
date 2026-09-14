class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  m = matrix.size();// row
        int n = matrix[0].size(); //colom

        int strt = 0 ;
        int end = m*n-1 ;

        while(strt <= end){
            
        int mid = strt + (end-strt)/2;
        if(matrix[mid/n][mid%n] > target){
            end = mid - 1 ;


        }
        else if(matrix[mid/n][mid%n] < target){
            strt = mid+1 ;
        }
        else{
            return true ;
        }

        }
        return false ;

        


        
    }
};
