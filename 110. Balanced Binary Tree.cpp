class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return check(root) != -1;
    }
    
    int check(TreeNode* node) {
        if (node == nullptr) return 0;
        
        int left = check(node->left);
        if (left == -1) return -1;
        
        int right = check(node->right);
        if (right == -1) return -1;
        
        if (abs(left - right) > 1) return -1;
        
        return 1 + max(left, right);
    }
};