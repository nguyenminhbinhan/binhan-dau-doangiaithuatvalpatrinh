class Solution {
    public:
        vector<int> targetIndices(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            vector<int> ket_qua;
            
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    ket_qua.push_back(i);
                }
            }
            
            return ket_qua;
        }
    };