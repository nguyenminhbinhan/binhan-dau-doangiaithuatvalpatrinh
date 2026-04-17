class Solution {
public:
    int minimumSum(int num) {
        vector<int> chu_so;
        while (num > 0) {
            chu_so.push_back(num % 10);
            num /= 10;
        }
        
        sort(chu_so.begin(), chu_so.end());
        
        int so1 = chu_so[0] * 10 + chu_so[2];
        int so2 = chu_so[1] * 10 + chu_so[3];
        
        return so1 + so2;
    }
};
