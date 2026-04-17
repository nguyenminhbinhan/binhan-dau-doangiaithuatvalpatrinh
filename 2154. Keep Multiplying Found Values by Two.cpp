class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> tap(nums.begin(), nums.end());
        
        while (tap.count(original)) {
            original *= 2;
        }
        
        return original;
    }
};
