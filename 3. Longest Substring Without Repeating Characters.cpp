class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> lastIndex(256, -1);

        int maxLen = 0;   
        int start = 0;    

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            
            if (lastIndex[c] >= start) {
                
                start = lastIndex[c] + 1;
            }

           
            lastIndex[c] = i;

            // cập nhật độ dài lớn nhất
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};