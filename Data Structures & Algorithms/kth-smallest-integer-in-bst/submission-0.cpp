class Solution {
public:
    int count = 0;

    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL) {
            return -1;
        }

        // Go left
        int leftAns = kthSmallest(root->left, k);

        if (leftAns != -1) {
            return leftAns;
        }

        // Visit root
        count++;

        if (count == k) {
            return root->val;
        }

        // Go right
        return kthSmallest(root->right, k);
    }
};