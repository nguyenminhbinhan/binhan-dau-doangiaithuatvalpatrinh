class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return taoCay(nums, 0, nums.size() - 1);
    }
    
    TreeNode* taoCay(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;
        
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = taoCay(nums, left, mid - 1);
        node->right = taoCay(nums, mid + 1, right);
        
        return node;
    }
};