/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return NULL;
        else {
            int left = maxDepth(root->left);// in here maxDepth calculate the node;
            int right = maxDepth(root->right);
            return max(left,right)+1 ;// in here 1 is for the only root node ;its mean it is add the root node;
        }

        
    }
};
