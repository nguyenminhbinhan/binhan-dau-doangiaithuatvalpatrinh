class Solution {
    public:
        vector<int> preorderTraversal(TreeNode* goc) {
            vector<int> ketQua;
            duyet(goc, ketQua);
            return ketQua;
        }
        
        void duyet(TreeNode* nut, vector<int>& ketQua) {
            if (nut == nullptr) return;
            ketQua.push_back(nut->val);       // goc
            duyet(nut->left, ketQua);         // duyet ben trai
            duyet(nut->right, ketQua);        // duyet ben phai
        }
    };