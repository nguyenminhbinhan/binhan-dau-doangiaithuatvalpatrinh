class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> dem;
        int n = nums.size();
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == key) {
                dem[nums[i+1]]++;
            }
        }
        
        int ket_qua = -1, max_dem = 0;
        for (auto &p : dem) {
            if (p.second > max_dem) {
                max_dem = p.second;
                ket_qua = p.first;
            }
        }
        
        return ket_qua;
    }
};
