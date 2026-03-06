class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        
        // Nếu là llá
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }
        
        // Kiểm tra cây con trái hoặc phair
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};