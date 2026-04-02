class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> dem(101, 0);
            
           
            for (int x : nums) {
                dem[x]++;
            }
            
            
            for (int i = 1; i <= 100; i++) {
                dem[i] += dem[i-1];
            }
            
            vector<int> ket_qua;
            for (int x : nums) {
                if (x == 0) ket_qua.push_back(0);
                else ket_qua.push_back(dem[x-1]);
            }
            
            return ket_qua;
        }
    };