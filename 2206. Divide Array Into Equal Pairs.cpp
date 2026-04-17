class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> dem;
        for (int x : nums) {
            dem[x]++;
        }
        for (auto &p : dem) {
            if (p.second % 2 != 0) return false;
        }
        return true;
    }
};
