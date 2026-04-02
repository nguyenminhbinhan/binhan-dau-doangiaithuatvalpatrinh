class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& mang) {
        int dem = 0;
        int max_dem = 0;
        
        for (int x : mang) {
            if (x == 1) {
                dem++;
                max_dem = max(max_dem, dem);
            } else {
                dem = 0;
            }
        }
        
        return max_dem;
    }
};