class Solution {
    public:
        vector<int> plusOne(vector<int>& so) {
            int n = so.size();
            
            for (int i = n - 1; i >= 0; i--) {
                if (so[i] < 9) {
                    so[i]++;
                    return so;
                }
                so[i] = 0;
            }
            
            so.insert(so.begin(), 1);
            return so;
        }
    };