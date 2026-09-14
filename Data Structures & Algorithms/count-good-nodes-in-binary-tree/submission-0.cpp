
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int count  = 0;
        if(root == NULL) return count ;
        countgoodsnodes (root ,count,root->val) ; // root->val = max ..here
        return count ;

    }
    void  countgoodsnodes(TreeNode*root,int &count ,int maxforthisStep){
        if(root == NULL) return;
        if(root->val >= maxforthisStep) {
            count ++ ;
            maxforthisStep = root->val ;

        }
        countgoodsnodes(root->left,count ,maxforthisStep);
        countgoodsnodes(root->right,count ,maxforthisStep);

        
    }
};
