class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length() ;

        stack<int>openSt;
        stack<int>asterikst;

        for (int i = 0 ;i<n;i++){
            if(s[i]=='('){
                openSt.push(i);
                }
                else if(s[i]=='*'){
                    asterikst.push (i);

                }
                else{
                    if(!openSt.empty()){
                        openSt.pop();

                       
                    }
                    else if (!asterikst.empty()){
                        asterikst.pop();
                    }
                    else{
                        return false ;
                    }
                }


                
            }
        
        while(!openSt.empty() && !asterikst.empty()){
            if(openSt.top() > asterikst.top()){
                return false ;
            }
             openSt.pop();
             asterikst.pop();


        }
        return  openSt.empty();  
    
 }
};