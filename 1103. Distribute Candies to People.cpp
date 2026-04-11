class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i = 1; // số kẹo cần phát ở lượt này
        int pos = 0; // vị trí người nhận
        
        while (candies > 0) {
            int phat = min(candies, i);
            ans[pos] += phat;
            candies -= phat;
            i++;
            pos = (pos + 1) % num_people;
        }
        
        return ans;
    }
};