class Solution {
    public:
        vector<int> sortEvenOdd(vector<int>& nums) {
            vector<int> chan, le;
            int n = nums.size();
            
            
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) chan.push_back(nums[i]);
                else le.push_back(nums[i]);
            }
            
           
            sort(chan.begin(), chan.end());              
            sort(le.begin(), le.end(), greater<int>()); 
            
            
            vector<int> ket_qua(n);
            int idx_chan = 0, idx_le = 0;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) ket_qua[i] = chan[idx_chan++];
                else ket_qua[i] = le[idx_le++];
            }
            
            return ket_qua;
        }
    };
    