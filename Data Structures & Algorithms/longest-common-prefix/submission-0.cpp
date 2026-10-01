class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string Prefix = strs[0];
         for (int i = 1 ;i<strs.size();i++){
            while (strs[i].find(Prefix)!= 0){
                Prefix = Prefix.substr(0, Prefix.size()-1);
            }
            if(Prefix.empty()){
                return "";
            }
         }
        return Prefix ;
    }
};