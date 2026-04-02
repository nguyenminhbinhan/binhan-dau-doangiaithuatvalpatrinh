class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, 
                     vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> map_tong12;
        
        for (int a : nums1) {
            for (int b : nums2) {
                map_tong12[a + b]++;
            }
        }
        
        int dem = 0;
        for (int c : nums3) {
            for (int d : nums4) {
                int tong34 = c + d;
                if (map_tong12.count(-tong34)) {
                    dem += map_tong12[-tong34];
                }
            }
        }
        
        return dem;
    }
};