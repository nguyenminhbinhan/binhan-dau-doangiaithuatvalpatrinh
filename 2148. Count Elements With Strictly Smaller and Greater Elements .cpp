class Solution {
public:
    int countElements(vector<int>& nums) {
        int nho_nhat = *min_element(nums.begin(), nums.end());
        int lon_nhat = *max_element(nums.begin(), nums.end());
        
        int dem = 0;
        for (int x : nums) {
            if (x > nho_nhat && x < lon_nhat) dem++;
        }
        return dem;
    }
};
