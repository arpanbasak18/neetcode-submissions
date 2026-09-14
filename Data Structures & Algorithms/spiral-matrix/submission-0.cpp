class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();  // row
        int  m = matrix[0].size(); //columns

        int dir = 0 ; // initialy dir = 0 

        //dir = 0 : left to right
        //dir = 1 : top to bottom 
        // dir = 2: right  to left 
        // dir = 3: down to top

        vector<int>result ;
        int  top = 0 ; int bottom = n-1;
        int right = m-1; int left = 0;

        while (top<=bottom && left<=right){
            if(dir == 0 ){
                //leeft to right
                //const : row(top)
                for(int i = left ; i <= right ; i++ ){

                   result. push_back(matrix[top][i]);

                }
                top++;
            }
            if(dir == 1){
                //top to bottom
                //const : coloumns(right)
                for ( int i = top ;i<=bottom;i++){
                    result.push_back (matrix[i][right]);
                }
                right -- ;
            }
            if (dir == 2){
                //right to left
                // const : row(bottom)
                for (int  i = right ;i>=left; i--){
                    result.push_back(matrix[bottom][i]);

                }
                bottom --;
            }
            if (dir == 3){
                //bottom to top
                //const : colomns(left)
                for (int i = bottom; i>= top ; i--){
                    result.push_back(matrix[i][left]);


                }
                left ++ ;
            }
            dir ++ ;
            if(dir==4){
                dir = 0 ;
            }
            
        }
        return result ;



        
        

    }
};

